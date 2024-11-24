t,a = map(int,input().split())
result = 0
for _ in range(t):
    s = list(input())
    o = s.count('O')
    x = s.count('X')
    if o > x:
        result += 1

print(result)