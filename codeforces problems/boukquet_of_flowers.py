
 
 
n = int(input())
 
while(n>0):
 
    nb, budget = list(map(int,input().split()))
 
    L = list(map(float,input().split()))
 
    L.sort(reverse=True)
 
# print(L)
 
    res = 0
 
    for i in L:
        if budget >100:
            res += i * 100
            budget -= 100
        else:
            res += i * budget
            break
  
    print("{:.15f}".format(res/sum(L)))
 
    n-=1
