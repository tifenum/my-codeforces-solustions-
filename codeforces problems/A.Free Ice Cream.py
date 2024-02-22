n,packs=map(int,input().split())
m = [input().split() for _ in range(n)]
m = [[item[0], int(item[1])] for item in m]
v=0
for i in range(n):
    if(m[i][0]=='+'):
        packs+=m[i][1]
    else:
        if(packs<m[i][1]):
            v=v+1
        else:
            packs-=m[i][1]
print(packs,v)
