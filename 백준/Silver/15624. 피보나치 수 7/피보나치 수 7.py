import math
n = int(input())
li = [0, 1]
for i in range(n+1):
    li.append((li[-1]+li[-2])%(10**9+7))
print(li[n])