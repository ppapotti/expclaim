from infer import *


#relation name
relation='wife'

#threshold for the rules
rule_thresh=0

#multiplicative factor for rules
MF=1

#way of claim generation : grounded(at least one rule is satisfied) or random
claim_gen_mode='grounded'

#number of claims to generate for positive and negative each (example : num_claims=2 then 2 positive claims and 2 negative claims)
num_claims=2


#boolean to activate bing evidence
bing_evidence=1

#threshold for bing evidence
bing_evid_thresh=0.5


#inference mode can be MAP or ASP
inference_mode='ASP'




#infer('wife',rule_thresh=0,bing_evidence=1,bing_evid_thresh=0.5,MF=1,claim_gen_mode='grounded',inference_mode='ASP',num_claims=2)


infer(relation,rule_thresh,MF,claim_gen_mode,num_claims,bing_evidence=1,bing_evid_thresh=0.5,inference_mode='ASP')

