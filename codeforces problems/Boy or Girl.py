c=set()
s=input()
for i in range(len(s)):
    c.add(s[i])
if(len(c)%2==0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
