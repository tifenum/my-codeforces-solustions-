str=input()
quantity=list(map(int, input().split()))
prices=list(map(int, input().split()))
rubels=int(input())
recepy=[str.count('B'),str.count('S'),str.count('C')]
def doable(mid,quantity,prices,rubels,recepy):
    requiredB = max(0,mid*recepy[0]-quantity[0])
    requiredS = max(0,mid*recepy[1]-quantity[1])
    requiredC = max(0,mid*recepy[2]-quantity[2])
    C=requiredB*prices[0]+requiredS*prices[1]+requiredC*prices[2]
    return C<=rubels
left=0
right=int(1e12)
while left<right:
    mid=(left+right+1)//2
    if doable(mid,quantity,prices,rubels,recepy):
        left=mid
    else:
        right=mid-1
print(left)
    
