import json,subprocess,time,os

start=time.time()

relation="almaMater"


json_file='1p_'+relation+'_NA.json'

if(not os.path.isfile(relation+'_cache.json')):
    print("NO CACHE")
    cache={}
else:
    with open(relation+'_cache.json','r') as f:
        cache=json.load(f)

with open(json_file,'r') as f:
    data=json.load(f)

n=0

for claims in data:
    for claim in claims:
        n+=1


print(n)

out=[]
i=1
for claims in data:
    for claim in claims:

        print(str(i)+'/'+str(n))
        print(claim)
        c='"'+claim['Subject'][1:-1]+' '+claim['Relation']+' '+claim['Object'][1:-1]+'"'

        if(c in cache):
            claim['True']=cache[c]


        else:
            cmd="java -jar FactCheck.jar -c "+c.replace('_',' ')+" -o ./trial.json -p ./config.properties >out.txt"
            print(cmd)
            subprocess.call(cmd,shell=True)

            with open('trial.json','r') as f:
                try:
                    result=json.load(f)

                except ValueError:
                    result={}
                    result['True']=-1
                    result['evidence']=[]

            claim['True']=result['True']
            cache[c]=result['True']
            cache[c+'_evidence']=result['evidence']

            with open(relation+'_cache.json', 'w') as outfile:
                json.dump(cache, outfile)

        i+=1

    out.append(claim)


with open(relation+'_bing.json', 'w') as outfile:
    json.dump(out, outfile)


#with open(relation+'_cache.json', 'w') as outfile:
#    json.dump(cache, outfile)




end =time.time()

print((end-start)/60)
