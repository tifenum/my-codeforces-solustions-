s=input()
s2=s.split("1111111")
s1=s.split("0000000")
if(1!=len(s2) or 1!=len(s1)):
    print("YES")
else:
    print("NO")
