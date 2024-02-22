n,m=list(map(int,input().split()))
l=list(map(int,input().split()))
l.sort()
s=0
for i in range(m):
    if(l[i]<=0):
        s-=l[i]
print(s)
