

import re,csv,subprocess,json,os
from utils import *






def check_KB_evid_rules(rules,evids,evids_literals,subject,object):

    for rule in rules:
        grounded_rule=ground_so(rule,subject,object)
        v2g=get_v2g(grounded_rule)


        if(len(v2g)==0):
            predicates=get_predicates(grounded_rule)
            predicates=[p for p in predicates if('type' not in p)]
            model_evid=[x for x in predicates if x not in evids]
            if(len(model_evid)==0):
                #print(rule)
                return 1


        if(len(v2g)==1):
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
                            gr=grounded_rule.replace('(C,',"("+replacement[0]+',').replace(',C)',','+replacement[0]+')')
                            gr_predicates=get_predicates(gr)
                            gr_preds=[p for p in gr_predicates if('type' not in p)]
                            #print(gr)
                            model_evid=[x for x in gr_preds if x not in evids]
                            if(len(model_evid)==0):
				#print(rule)
                                return 1

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
                            #print(pred)
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
                        if(len(model_evid)==0):
				#print(rule)
                                return 1

    return 0


