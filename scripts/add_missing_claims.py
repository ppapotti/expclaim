import os

with open('claims.txt','r') as f:
    lines=f.readlines()
with open('rules','r') as g:
    rules=g.readlines()

files=os.listdir('MAP_Evidence/')
n=0
for line in lines:
   id=line.split(',')[0]
   file=id+'er_unique.txt'
   if(file not in files):
       h=open('MAP_Evidence/'+file,'w')
       for rule in rules:
           h.write(rule)
       n+=1
       print(file)


print(n)


def add_missing_claims(dir):

    with open(dir+'claims.txt','r') as f:
    	lines=f.readlines()
    with open(dir+'rules','r') as g:
	rules=g.readlines()

    files=os.listdir(dir+'MAP_Evidence/')
    n=0
    for line in lines:
        id=line.split(',')[0]
        file=id+'er_unique.txt'
        if(file not in files):
            h=open(dir+'MAP_Evidence/'+file,'w')
	    for rule in rules:
	        h.write(rule)
            n+=1
            print(file)

