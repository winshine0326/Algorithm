t = int(input())

dict = {
    136 : 1000,
    142 : 5000,
    148 : 10000,
    154 : 50000,
}
result = 0
for _ in range(t):
    a,b = map(int,input().split())
    result += dict[a]
print(result)