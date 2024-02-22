n,m,k = list(map(int,input().split()))
arrays = list(map(int,input().split()))
operations = ([list(map(int,input().split()))for i in range(m)])
queries = ([list(map(int,input().split()))for i in range(k)])
def bruh(arrays,operations,n):
    S =[]
    for l in operations:
        e=[]
        for i in range(n):
            if(arrays[i]<=l[1] and arrays[i]>=l[0]):
                e.append(l[2])
            else:
                e.append(0)
        S.append(e)
    return(S)
o=bruh(arrays,operations,n)
for i in queries:
    for j in range(i[0]-1,i[1]):
        for s in range(n):
            arrays[s]+=o[j][s]
for v in range(n):
    print(arrays[v])

def vals(): return map(int, input().split())
n, m, k = vals()
arr = list(vals())
op = []
q = [0] * (int(1e5)+100)
pre = [0] * (int(1e5)+100)
for i in range(m):
    op.append(vals())
for i in range(k):
    x, y = vals()
    q[x-1] += 1
    q[y] -= 1
s = 0 
for i in range(m):
    s += q[i]
    l, r, d = op[i]
    pre[l-1] += d * s
    pre[r] -= d * s
s = 0 
for i in range(n):
    s += pre[i]
    arr[i] += s
print(*arr)
