f=open('final_full_vicePresident.csv')


lines=f.readlines()


n=0

for line in lines:
    if(line.count(',')>3):
        n+=1
        print(line)


print(n)
