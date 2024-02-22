n,k=list(map(int,input().split()))
if(n%2==0 and k<=n//2):
    print(k*2-1)
elif(n%2==1 and k<=(n//2)+1):
    print(k*2-1)
else:
    print((k-(n//2 + n%2 ))*2)
