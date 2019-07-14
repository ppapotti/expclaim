with open('old_full_deathPlace.csv','r') as f:
    lines=f.readlines()

n=0
for line in lines:
    if(line.count(',')>3): 
        n+=1

print(n)


with open('full_deathPlace.csv','w') as f:

    for line in lines:
        if(line.count(',')<=3):
            f.write(line)
