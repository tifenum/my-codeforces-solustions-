n = int(input())
L = list(map(int, input().split()))
L_sorted = sorted(L)
i=1
while(i<n and L[i]>=L[i-1]):
    i+=1
if(L_sorted==L[i:]+L[:i]):
    print(n-i)
else:
    print(-1)
