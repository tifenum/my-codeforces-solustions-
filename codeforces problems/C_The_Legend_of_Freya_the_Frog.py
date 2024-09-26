n=int(input())
for i in range(n):
    l=list(map(int,input().split()))
    x=l[0]
    y=l[1]
    k=l[2]
    ans=0
    p=(x+k-1)//k
    o=(y+k-1)//k
    ans=max(p*2-1,o*2)
    print(ans)