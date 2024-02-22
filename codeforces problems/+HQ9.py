s=input()
L=s.split('H')
L1=s.split('Q')
L3=s.split('9')
if(len(L)+len(L1)+len(L3)!=3):
    print("YES")
else:
    print("NO")
