from math import ceil

s = list(input())

change = 0
pre = s[0]
for i in s:
    if i != pre:
        change += 1
    pre = i
print(ceil(change/2))