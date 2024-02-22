l = [[int(input()), [num - i for i, num in enumerate(map(int, input().split()), start=1)]] for _ in range(int(input()))]
s=0
for i in l:
    u=set(i[1])
    for j in u:
        if(i[1].count(j)!=1):
            s+=int((i[1].count(j)*(i[1].count(j)-1))/2)
    print(s)
    s=0
