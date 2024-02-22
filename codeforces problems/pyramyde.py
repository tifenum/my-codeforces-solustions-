n,m=map(int,input().split())
Clusters=list(map(int,input().split()))
Arrays=list(map(int,input().split()))
def canfit(mid,Clusters,Arrays):
    s=0
    move=[]
    for v in Arrays:
        for j in Clusters:
            Clusters.count(j)
            if 2**v<=j and move.count(j) < Clusters.count(j):
                s=s+1
                move.append(j)
                break
    return s>=mid
left=0
Right=m**2
while left<Right:
    mid=(left+Right+1)//2
    if canfit(mid,Clusters,Arrays):
        left=mid
    else:
        Right=mid-1
print(left)
