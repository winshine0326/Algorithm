ls = []
mn = 1001
rs = 0
for _ in range(int(input())):
    ls.append(list(map(int,input().split())))

for i in range(len(ls)):
    if ls[i][1] < mn:
        mn = ls[i][1]
        rs = i

print(ls[rs][0],ls[rs][1])