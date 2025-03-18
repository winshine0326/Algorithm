n = int(input())
s = list(map(int,input().split()))
result = 0
for i in range(n):
    a,b = map(int,input().split())
    if s[i]:
        result += max(b-a,0)

print(result)