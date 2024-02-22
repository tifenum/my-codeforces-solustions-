n=int(input())
l=list(map(int,input().split()))
l.sort()
i=1
s=l[0]
if(n==1):
    print("NO")
elif(n==2 ):
    if(l[1]>l[0]):
        print(l[1])
    else:
        print("NO")
else:
    while(s==l[i] and i!=n-1):
        i=i+1
    if(i!=n-1 and l[i]>l[i-1]):
        print(l[i])
    else:
        print("NO")
