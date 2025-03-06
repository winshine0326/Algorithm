t = int(input())
s = []
for _ in range(t):
    a,b = map(int,input().split())
    s.append(a*b)
print(max(s))