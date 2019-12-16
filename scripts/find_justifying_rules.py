from justifying_rules import *
import csv




rels=['almaMater','deathPlace','spouse','vicePresident']
exps=['GROUNDED_CLAIMS','RAND_CLAIMS_1','RAND_CLAIMS_2']

for rel in rels:
    for exp in exps:

        dir='/home/mohammed/Desktop/Reasoner_versions/push_expclaim/Results/'+rel+'/Experiments/'+exp+'/'
        print(rel,exp)
        results=[]

        with open(dir+'claims.txt','r') as f:
            lines=f.readlines()

        for line in lines[:]:
            id,subj,obj,_=line.split(',')
            res=[id,subj,obj,find_justifying_rule(dir+'MAP_Evidence/'+id+'er_unique.txt',subj,obj)]
            results.append(res)

        with open(dir+'justifying_rules.csv','w',newline="") as g:
            wr=csv.writer(g)
            wr.writerows(results)
