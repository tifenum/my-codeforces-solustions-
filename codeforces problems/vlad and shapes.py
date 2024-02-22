for i in range(int(input())):
    e = set()
    for j in range(int(input())):
        l = list(map(int, input().strip()))
        if 1 in l:
            e.add(tuple(l))
    if len(e) == 1:
        print("SQUARE")
    else:
        print("TRIANGLE")
