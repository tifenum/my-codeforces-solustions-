for _ in range(int(input())):
    a,b,r=list(map(int,input().split()))
    if(r<a-b):
        print(abs(((a-b)^r)))
    else:
        print(abs((a-b)^(a-b)+1))
