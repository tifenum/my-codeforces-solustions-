n,k=list(map(int,input().split()))
m=[list(map(int,input().split()))for i in range(n)]
s=0
i=0
while(i+1<n):
    s=s+((m[i][0]-m[i+1][0])**2+(m[i][1]-m[i+1][1])**2)**(0.5)
    i=i+1
print((s/50)*k)
