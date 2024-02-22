r = input()
k = input()
rook = [ord(r[0]) - 96, int(r[1])]
knight = [ord(k[0]) - 96, int(k[1])]
s = 0
def knight1(knight, i, j):
    if (abs(knight[0] - i) == 2 and abs(knight[1] - j) == 1) or (abs(knight[1] - j) == 2 and abs(knight[0] - i) == 1):
        return True
    return False
for i in range(1, 9):
    for j in range(1, 9):
        if (j == rook[1] or i == rook[0] or (i == knight[0] and j == knight[1]) or knight1(knight, i, j) or knight1(rook, i, j)):
            continue
        s += 1
print(s)
