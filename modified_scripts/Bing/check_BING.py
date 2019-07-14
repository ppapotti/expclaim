import json,subprocess

relation='almaMater'


#with open('rand2_claims/'+relation+'_claims.txt','r') as f:
#    lines=f.readlines()
with open('rand2_claims/CDPN.csv','r') as f:
    lines=f.readlines()


with open(relation+'_cache_rand2.json','r') as g:
    cache=json.load(g)


TP=TN=FP=FN=CDP=CDN=0


for line in lines[:]:

 #   id,subject,object,label=line.strip().split(',')
    id,subject,object,label,status,exec_time=line.strip().split(',')

    #print(id,subject,object,label)
    c='"'+subject+' '+relation+' '+object+'"'
    c=c.replace('_',' ')
    #print(c)


    if(cache[c]==-1 or cache[c]==0.25 or cache[c]==0.5):
        if(label=='1'):
            CDP+=1
        else:
            CDN+=1

    elif(cache[c]>0.5):
        if(label=='1'):
            TP+=1
        else:
            FP+=1

    elif(cache[c]<0.5):
        if(label=='1'):
            FN+=1
        else:
            TN+=1






print(TP,TN,FP,FN,CDP,CDN)

