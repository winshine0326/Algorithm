flag = True
res = 0
for _ in range(int(input())):
    if flag:
        res+=3
    else:
        res-=2
    flag = not flag
print(res)