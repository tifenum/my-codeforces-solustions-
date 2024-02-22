def tri(a,b,n):
    p=0
    for i in range(len(a)):
        for j in range(i):
            if(a[j+1]<a[j]):
                s=a[j]
                a[j]=a[j+1]
                a[j+1]=s
                c=b[j]
                b[j]=b[j+1]
                b[j+1]=c
                p+=1
            if(p+1==n):
                print(a)
                print(b)
                return(0)
    print(a)
    print(b)
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    s=0
    o=0
    l=a
    a.sort()
    m=b
    b.sort()
    for i in range(len(l)):
        if(l[i]!=a[i]):
            s+=1
        if(m[i]!=b[i]):
            o+=1
    if(o<s):
        tri(l,m,n)
    else:
        tri(m,l,n)
