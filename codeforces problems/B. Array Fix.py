for _ in range(int(input())):
    n=int(input())
    l = input().split()
    s=''.join(l)
    p=[]
    for i in range(len(s)):
        p.append(ord(s[i]))
    o=p.copy()
    p.sort()
    if(p==o):
        print("YES")
    else:
        print("NO")
