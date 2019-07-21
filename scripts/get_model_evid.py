

import re,csv,subprocess,json,os
from utils import *



def get_NA_preds(rel,experiment_path,inference_mode,bing_evidence):


    claims_path=experiment_path+'claims.txt'

    if('ASP' in inference_mode):
        if(bing_evidence==False):
            s='ASP_NO_BING_EVID_Evidence/'
        else:
            s='ASP_WITH_BING_EVID_Evidence/'
    else:
        if(bing_evidence==False):
            s='MAP_NO_BING_EVID_Evidence/'
        else:
            s='MAP_WITH_BING_EVID_Evidence/'


    evidence_path=experiment_path+s

    with open(claims_path,'r') as f:
        lines=f.readlines()[:]
    print(claims_path)
    print(lines)

    NA_json=[]
    m=0
    for line in lines:
        print(line)
        id,subject,object,label=line.rstrip('\n').split(',')
        path=evidence_path+id+'er_unique.txt'
        #print(id)
        if(os.path.isfile(path)==False):
            print("Can't find "+path+"\n")
            continue

        with open(evidence_path+id+'er_unique.txt','r') as f:
            rules_evids=f.readlines()
            #print(rules_evids)
            rules=[]
            evids=[]
            for elem in rules_evids:
                if(':-' in elem and elem[:2]!=':-'):
                    rules.append(elem.split(':-')[1].rstrip('.\n'))
                if(':-' not in elem and elem !='\n'):
                    evids.append(elem.rstrip('.\n'))


        claim=rel+'('+'"'+subject+'","'+object+'")'
        evids=[e for e in evids if('type' not in e)]


        evids_literals=set()

        for evd in evids:
            l=get_literals(evd)
            for ll in l:
                evids_literals.add(ll)
        if(subject in evids_literals):
            evids_literals.remove(subject)
        if(object in evids_literals):
            evids_literals.remove(object)


        NA_evid=[]
        for rule in rules:
            #print(rule)
            grounded_rule=ground_so(rule,subject,object)
            v2g=get_v2g(grounded_rule)


            if(len(v2g)==0):
                predicates=get_predicates(grounded_rule)
                predicates=[p for p in predicates if('type' not in p)]
                model_evid=[x for x in predicates if x not in evids]
                NA_evid.extend(model_evid)

            if(len(v2g)==1):
                preds=get_predicates(grounded_rule)
                preds=[p for p in preds if('type' not in p)]
                #print("Preds:",preds)
                #print("Evids:",evids)
                for pred in preds:
                    relation=get_relation(pred)
                    #print("relation:",relation)
                    for evid in evids:
                        if(relation in evid):
                            evid_literals=get_literals(evid)
                            pred_literals=get_literals(pred)
                            #print("Evid Literals:",evid_literals)
                            #print("Pred_literals:",pred_literals)
                            replacement=[x for x in evid_literals if x not in pred_literals]
                            #print("Replacement:",replacement)
                            if(len(replacement)>0):
                                gr=grounded_rule.replace('(C,',"("+replacement[0]+',').replace(',C)',','+replacement[0]+')')
                                gr_predicates=get_predicates(gr)
                                gr_preds=[p for p in gr_predicates if('type' not in p)]
                                #print(gr)
                                model_evid=[x for x in gr_preds if x not in evids]
                                #print("ADDED THIS: ",model_evid)
                                NA_evid.extend(model_evid)

            if(len(v2g)==2):
                replace_dict={}
                preds=get_predicates(grounded_rule)
                preds=[p for p in preds if('type' not in p)]
                for pred in preds:
                    relation=get_relation(pred)
                    for evid in evids:
                        if(relation in evid):
                            evid_literals=get_literals(evid)
                            pred_literals=get_literals(pred)
                            replacement=[x for x in evid_literals if x not in pred_literals]
                            if(len(replacement)>0):
                                #print("PRED",pred)
                                v2replace=list(get_v2g(pred))[0]
                                if(v2replace not in replace_dict.keys()):
                                    replace_dict[v2replace]=[replacement[0]]
                                else:
                                    replace_dict[v2replace].append(replacement[0])
                if(len(replace_dict)==2):

                    for val1 in replace_dict['C']:
                        for val2 in replace_dict['D']:
                            gr=grounded_rule.replace('(C,',"("+val1+',').replace(',C)',','+val1+')') \
                                    .replace('(D,',"("+val2+',').replace(',D)',','+val2+')')
                            #print(gr)
                            gr_predicates=get_predicates(gr)
                            gr_preds=[p for p in gr_predicates if('type' not in p)]
                            model_evid=[x for x in gr_preds if x not in evids]
                            NA_evid.extend(model_evid)


            #print(NA_evid)
        NA_evid=set(NA_evid)
        if(claim in NA_evid):
            NA_evid.remove(claim)
        NA_evid=[evid for evid in NA_evid if(sub_equals_object(evid))==False]
        jsn=[]






        for evid in NA_evid:
            dict={}
            dict['id']=id
            dict['Relation']=get_relation(evid)
            literals=get_literals(evid)
            dict['Subject']=literals[0]
            dict['Object']=literals[1]
            jsn.append(dict)

        if(len(jsn)>0):
            NA_json.append(jsn)


    #print(NA_json[0][0])

    with open(experiment_path+rel+'_NA.json', 'w') as outfile:
        json.dump(NA_json, outfile)

    print("DONE!")

    return experiment_path+rel+'_NA.json'
