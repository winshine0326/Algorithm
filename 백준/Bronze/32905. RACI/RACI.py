n, m = map(int, input().split())
flag = 1

for _ in range(n):
    ls = list(input().split())

    if ls.count("A") != 1:
        flag = 0

print("Yes" if flag else "No")