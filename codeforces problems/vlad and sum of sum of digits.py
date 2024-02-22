N=200000
v=[0]*200007
for i in range(1,200001,1):
    v[i]=v[i-1]+sum(map(int,str(i)))
for _ in range(int(input())):
    print(v[int(input())])
