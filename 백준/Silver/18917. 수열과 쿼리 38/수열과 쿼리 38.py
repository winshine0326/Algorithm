import sys
n = int(sys.stdin.readline())
arr = [0]
sum = 0
xor = 0

for _ in range(n):
    query = list(map(int, sys.stdin.readline().split()))
    if query[0] == 1:
        arr.append(query[1])
        sum += query[1]
        xor = xor^query[1]
    elif query[0] == 2:
        sum -= query[1]
        xor = xor^query[1]
    elif query[0] == 3:
        print(sum)
    else:
        print(xor)