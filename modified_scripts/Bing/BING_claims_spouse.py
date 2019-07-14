import json,subprocess,os,time


s=time.time()
relation='spouse'


with open('rand2_claims/'+relation+'_claims.txt','r') as f:
    lines=f.readlines()


if(not os.path.isfile(relation+'_cache_rand2.json')):
    print("NO CACHE")
    cache={}
else:
    with open(relation+'_cache_rand2.json','r') as f:
        cache=json.load(f)

n=len(lines)
o=1
for line in lines[:]:

    id,subject,object,label=line.strip().split(',')


    #print(id,subject,object,label)
    c='"'+subject+' '+relation+' '+object+'"'
    c=c.replace('_',' ')
    #print(c)
    print(str(o)+'/'+str(n))
    o+=1
    if(c in cache):
        continue

    else:
        cmd="java -jar FactCheck.jar -c "+c+" -o ./trial.json -p ./config.properties >out.txt"
        print(cmd)
        subprocess.call(cmd,shell=True)
        with open('trial.json','r') as f:
            try:
                result=json.load(f)

            except ValueError:
                result={}
                result['True']=-1

        cache[c]=result['True']

        with open(relation+'_cache_rand2.json', 'w') as outfile:
            json.dump(cache, outfile)

print(time.time()-s)

