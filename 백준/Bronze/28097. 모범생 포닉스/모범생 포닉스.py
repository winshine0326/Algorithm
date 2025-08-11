n = int(input())
p = list(map(int, input().split()))
rt = sum(p) + (8 * (n - 1))
print(rt // 24, rt % 24)