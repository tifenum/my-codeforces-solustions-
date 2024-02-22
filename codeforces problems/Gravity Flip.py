n=int(input())
l=list(map(int,input().split()))
l.sort()
print(' '.join([str(x) for x in l]))
