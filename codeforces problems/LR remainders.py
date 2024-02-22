for _ in range(int(input())):
    n,m=list(map(int,input().split()))
    a=list(map(int,input().split()))
    s=input()
    l=0
    r=n-1
    i=0
    p=1
    for  k in range(n):
        p=p*a[k]
    print(p)
    print(p%m)
    while(i!=n):
        print(a)
        if(s[i]=="L"):
            p=p/a[0]
            print(a[0])
            a.remove(a[0])
        else:
            p=p/a[len(a)-1]
            print(a[len(a)-1])
            a.pop()
        i=i+1
        if(len(a)!=0):
            print(int(p%m))
