n,m = map(int, input().split())

listen = set()
see = set()
arr = []

for i in range(n):
    listen.add(input())
for i in range(m):
    see.add(input())

arr = sorted(list(listen&see))

print(len(arr))
for i in arr:
    print(i)