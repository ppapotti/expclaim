from rule_reading_functions import *
from get_evidence import *
from get_rules import *
from import_evid import *
from bing_evid import *
from inference import *
from get_model_evid import *
from get_bing_evid import *
import time


def infer(relation,rule_thresh=0,MF=1,claim_gen_mode='random',num_claims=5,bing_evidence=0,bing_evid_thresh=0.5,inference_mode='MAP'):


    if(claim_gen_mode=='random'):
        pre='random'
    else:
        pre='grounded'


    prefix='Results/'+relation+'/'

    file_rules=prefix+relation+'_rules.txt'

    start=time.time()


    print("Generating rules...")

    rule_dict=get_rule_dict(file_rules,relation)
    rule_dict=filter_rule_dict(rule_dict,rule_thresh)
    rule_dict=multiply_weight_rule_dict(rule_dict,MF)
    rule_dict=map_weight_rule_dict(rule_dict)

    rules=prefix+str(rule_thresh)+'_'+str(MF)+'_'+'mapped_weights'+'_'+relation+'_rules_FINAL.txt'

    #print(rules)

    #depending on inference_mode: if ASP then write rules without weights else write with weightd
    write_rule_dict(rule_dict,rules,inference_mode)

    print("Rules Generated!")
    print("Building Claims...")


    claims_file='claims/'+relation+'_claims.txt'
    timestr = time.strftime("%Y%m%d-%H%M%S")

    if(bing_evidence==1):
        dir=prefix+'Experiments/'+pre+'_claims_BING_'+inference_mode+'_'+str(rule_thresh)+'_'+str(MF)+'_'+str(bing_evid_thresh)+'_'+timestr+'/'
        print(dir)
    else:
        dir=prefix+'Experiments/'+pre+'_claims_NO_BING_'+inference_mode+'_'+str(rule_thresh)+'_'+str(MF)+'_'+timestr+'/'



    if('MAP' in inference_mode):
        if(bing_evidence==False):
            evid_dir=dir+'MAP_NO_BING_EVID_Evidence/'
        else:
            evid_dir=dir+'MAP_WITH_BING_EVID_Evidence/'
    if('ASP' in inference_mode):
        if(bing_evidence==False):
            evid_dir=dir+'ASP_NO_BING_EVID_Evidence/'
        else:
            evid_dir=dir+'ASP_WITH_BING_EVID_Evidence/'


    output_clm=dir+'claims.txt'


    if(claim_gen_mode=='grounded'):
        generate_evid_KB_grounded(rules,claims_file,dir,evid_dir,N=num_claims)
    else:
        generate_evid_KB_random(rules,claims_file,dir,evid_dir,N=num_claims)



    if(bing_evidence==1):
        print("Generating Bing Evidence...")
        json_file=get_NA_preds(relation,dir,inference_mode,bing_evidence)
        cache_file='bing_caches/'+relation+'_cache.json'
        get_bing_evid(json_file,cache_file,relation)
        needed=add_prob_json('bing_caches/'+relation+'_cache.json',dir+relation+'_NA.json')
        add_bing_evidence(needed,evid_dir,bing_evid_thresh,inference_mode)


    reasoner(relation,dir,inference_mode=inference_mode,bing_evidence=bing_evidence)







#infer('wife',rule_thresh=0,bing_evidence=1,bing_evid_thresh=0.5,MF=1,claim_gen_mode='grounded',inference_mode='ASP',num_claims=2)

