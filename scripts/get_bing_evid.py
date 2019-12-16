import json,subprocess,time,os



def get_bing_evid(json_file,cache_file,relation):

    start=time.time()


    if(not os.path.isfile(cache_file)):
        print("NO CACHE")
        cache={}
    else:
        with open(cache_file,'r') as f:
            cache=json.load(f)


    with open(json_file,'r') as f:
        data=json.load(f)

    n=0

    for claims in data:
        for claim in claims:
            n+=1


  #  print(n)

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
                cmd="java -jar scripts/Bing/FactCheck.jar -c "+c.replace('_',' ')+" -o scripts/Bing/trial.json -p scripts/Bing/config.properties >out.txt"
                print(cmd)
                subprocess.call(cmd,shell=True)

                with open('scripts/Bing/trial.json','r') as f:
                    try:
                        result=json.load(f)

                    except ValueError:
                        result={}
                        result['True']=-1

                claim['True']=result['True']
                cache[c]=result['True']

                with open(cache_file, 'w') as outfile:
                    json.dump(cache, outfile)

            i+=1

        out.append(claim)




#json_file='almaMater_NA.json'
#get_bing_evid(json_file,'tet_cache.json','almaMater')





  #  with open(relation+'_bing.json', 'w') as outfile:
   #     json.dump(out, outfile)


#with open(relation+'_cache.json', 'w') as outfile:
#    json.dump(cache, outfile)




#end =time.time()

#print((end-start)/60)
