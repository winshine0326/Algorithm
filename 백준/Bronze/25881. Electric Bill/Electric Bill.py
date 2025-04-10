a, b = map(int, input().split())
t = int(input())
for _ in range(t):
    n = int(input())
    if n <= 1000:
        print(n, a*n)
    else:
        print(n, a*1000 + (n-1000)*b)