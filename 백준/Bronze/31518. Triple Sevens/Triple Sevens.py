n = int(input())
swt = 1
for _ in range(3):
    s = list(map(int, input().split()))
    if not s.count(7):
        swt = 0

if swt:
    print(777)
else:
    print(0)
