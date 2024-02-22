n=int(input())
x=[input() for i in range(n)]
print(max(x, key=x.count))
