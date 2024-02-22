for i in range(int(input())):
    n,k=list(map(int,input().split()))
    s=0
    if(k<=2*((2*n)-2)):
        s=(k//2)+k%2
    elif(k>=2*((2*n)-2)):
        s=k-2*n+2
    print(s)
