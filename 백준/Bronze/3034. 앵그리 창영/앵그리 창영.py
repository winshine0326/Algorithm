import math
t, w, h = map(int, input().split())
max = math.sqrt((w**2)+(h**2))
for _ in range(t):
    n = int(input())
    if n<=max:
        print("DA")
    else:
        print("NE")

