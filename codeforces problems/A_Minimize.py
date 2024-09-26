n=int(input())
for i in range(n):
    mn=10e10
    ans=0
    l=list(map(int,input().split()))
    for j in range(l[0],l[1]+1):
        mn=min(abs(j-l[0])+(l[1]-j),mn)
    print(mn)

