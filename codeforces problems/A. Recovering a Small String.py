for _ in range(int(input())):
    n=int(input())
    if(n<=28):
        print("aa"+chr(n-2+96))
    elif(n>28 and n<=53):
        print('a'+chr(n-27+96)+'z')
    else:
        print(chr(n-52+96)+"zz")
