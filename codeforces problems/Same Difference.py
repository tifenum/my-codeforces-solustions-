t = int(input())
l = [[int(input()), [num - i for i, num in enumerate(map(int, input().split()), start=1)]] for _ in range(t)]
s=0
p=[]
for i in l:
    for j in range(i[0]):
        if(i[1].count(i[1][j])!=1 and i[1][j]not in p):
            p.append(i[1][j])
            s+=int((i[1].count(i[1][j]))*((i[1].count(i[1][j])-1))/2)
    print(s)
    p=[]
    s=0
