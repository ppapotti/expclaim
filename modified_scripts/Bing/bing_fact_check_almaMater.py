import json,subprocess

relation='almaMater'


with open('ASP_'+relation+'_CDPN.csv','r') as f:
    lines=f.readlines()

g=open('ASP_bing_results_'+relation+'_CDPN.txt','w')

TP=TN=FP=FN=CDP=CDN=0
o=0

for line in lines[:]:

    id,subject,object,label=line.strip().split(',')
    o+=1
    print(o)
    #print(id,subject,object,label)
    c='"'+subject+' '+relation+' '+object+'"'
    c=c.replace('_',' ')
    #print(c)

    cmd="java -jar FactCheck.jar -c "+c+" -o ./trial.json -p ./config.properties >out.txt"
    print(cmd)
    subprocess.call(cmd,shell=True)
    with open('trial.json','r') as f:
        try:
            result=json.load(f)

        except ValueError:
            result={}
            result['True']=-1


        a=line.strip()+","+str(result['True'])

        if(result['True']==-1):
            if(label=='1'):
                CDP+=1
            else:
                CDN+=1

        elif(result['True']>0.5):
            if(label=='1'):
                TP+=1
            else:
                FP+=1

        elif(result['True']<0.5):
            if(label=='1'):
                FN+=1
            else:
                TN+=1

    g.write(a+'\n')




print(TP,TN,FP,FN,CDP,CDN)

