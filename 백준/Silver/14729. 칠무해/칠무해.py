import sys
input=sys.stdin.readline

n = int(input().rstrip())

ls=[float(input().rstrip()) for _ in range(7)]
ls.sort()

for _ in range(n-7):
    ls.append(float(input().rstrip()))
    ls.sort()
    ls.pop()

for i in ls:
    print("{:.3f}".format(i))