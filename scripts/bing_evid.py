import json,os,numpy as np
from copy import deepcopy

def get_weight(p):
    return np.log(p/(1-p))




def add_prob_json(bing_json,needed_json):


    i,n=0,0
    t=0
    with open(bing_json,'r') as f:
        cache=json.load(f)


    with open(needed_json,'r') as f:
        needed=json.load(f)

    for claims in needed:
        for claim in claims:
            t+=1
            c='"'+claim['Subject'][1:-1]+' '+claim['Relation']+' '+claim['Object'][1:-1]+'"'
            if(c in cache):
                #print(claim)
                claim['True']=cache[c]
                i+=1

            else:
                print(c +' is not in cache')
                claim['True']=-1
                n+=1

    for claims in needed:
        for claim in claims:
            if(claim['True']==0.25):
                claim['True']=0.5


#    print(i,n,t)
    return needed


def add_bing_evidence(needed,evid_dir,M,inference_mode):


    for claims in needed:
        for claim in claims:

            if('True' in claim and claim['True']>0):

                file=evid_dir+claim['id']+"er_unique.txt"
                if(os.path.isfile(file)):
                    #print(file)
                    f=open(file,"a")
                    predicted_value=float(claim["True"])
                    if(predicted_value>M):
                        #print(predicted_value,M)
                        if('MAP' in inference_mode):
                            f.write(str(get_weight(float(claim["True"])))+" "+claim["Relation"]+"("+claim["Subject"]+","+claim["Object"]+").\n")
                        else:
                            f.write(claim["Relation"]+"("+claim["Subject"]+","+claim["Object"]+").\n")

                    f.close()





#add_bing_evidence(needed,'Evidence/',0.1)
