for _ in range(int(input())):
    n,k,x=list(map(int,input().split()))
    l=list(map(int,input().split()))
    s=[]
    l.sort()
    sum2=0
    sum1=0
    for i in range(n-x):
        sum1=sum1+l[i]
        if(i<x):
            sum2=sum2+(l[n-1-i])
    v=sum1-sum2
    print(v)
    s.append(v)
    print(n,k,x)
    print(l)
    for j in range(k):
        s.append(v-2*l[n-1-x-j]+l[n-1-j])
        print(v)
        print(l[n-1-x-j])
        print(l[n-1-j])
        print(v-2*l[n-1-x-]+l[n-1-i])
    s.sort()
    print(s)
    print(s[-1])
