n,m=list(map(int,input().split()))
l=list(map(int,input().split()))
l.sort()
i=0
j=n-1
s=l[j]-l[0]
while(j==m-1):
    j+=n
    i+=n
    if(l[j]-l[i]<=s):
        s=l[j]-l[i]

print(s)
