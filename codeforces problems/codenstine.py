def solve():
    n = int(input())
    myset = set()
    sizes = []  # Stores sizes of myset for 'ask' command

    for i in range(n):
        command, *args = input().split()

        if command != "ask":
            s = ' '.join(args)
            if command == "touch":
                myset.add(s)
            else:
                myset.discard(s)
        else:
            sizes.append(len(myset))

    for size in sizes:
        print(size)
solve()
