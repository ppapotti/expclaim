import json

with open('graduatedFrom_cache_test.json','r') as f:
    data1=json.load(f)


with open('part2_graduatedFrom_new_cache.json','r') as f:
    data2=json.load(f)



print(len(data1))
print(len(data2))


data={}

for elem in data2:
    print(elem)
    data[elem]=data2[elem]

for elem in data1:
    if(elem not in data):
        print(elem)
        data[elem]=data1[elem]


print(len(data))

with open('graduatedFrom_cache_test.json','w') as f:
    json.dump(data,f)

print(len(data))
