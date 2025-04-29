n = int(input())
s = input()
res = 0
for i in s:
    if i == 'o':
        res += 1
    elif i == 'j' or i == 'i':
        res += 2
print(res)