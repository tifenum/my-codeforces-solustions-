for _ in range(int(input())):
    n,k=list(map(int,input().split()))
    a=97
    s=""
    for j in range(k):
        s=s+chr(a+j)
    s=s*n
    print(s)
