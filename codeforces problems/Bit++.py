n = int(input())
m = [input() for i in range(n)]
x=0
for i in range(n):
    if(m[i].count('+')>0):
        x+=1
    else:
        x-=1
print(x)
