n = int(input())
L = [list(map(list, [list(map(int, input().split())) for j in range(int(input()))])) for _ in range(n)]
for i in range(n):
    left = 0
    right = int(10e9)
    while left < right:
        k = (left + right + 1) // 2
        leftk = 0
        rightk = k
        f = 0
        for j in range(len(L[i])):
            if leftk > L[i][j][1] or rightk < L[i][j][0]:
                f = 1
                break
            leftk = max(leftk, L[i][j][0])
            rightk = min(rightk, L[i][j][1])
            leftk = max(0, leftk - k)
            rightk = rightk + k
        if f == 0:
            right = k
        else:
            left = k - 1
    print(left)
