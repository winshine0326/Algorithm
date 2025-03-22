point = ["N","E","S","W"]
res = "N"
for _ in range(10):
    n = int(input())
    if n == 1:
        res = point[(point.index(res)+1)%4]
    elif n == 2:
        res = point[(point.index(res)+2)%4]
    elif n == 3:
        res = point[(point.index(res)+3)%4]

print(res)