import sys

n = int(sys.stdin.readline())

li = [sys.stdin.readline().rstrip().split() for _ in range(n)]

for menu in li[0]:
    print(menu)