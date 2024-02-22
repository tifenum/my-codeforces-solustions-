for _ in range(int(input())):
    n,m=list(map(int,input().split()))
    if(m%2==0):
        print(int((m/2)*n))
    else:
        print(int(((m-1)/2)*n))
