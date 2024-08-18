from math import log2
k = int(input())

factors = []
i = 2
while i <= k:
    if k%i==0:
        factors.append(i)
        k = k/i
    else:
        i += 1

cnt = len(factors)
if (log2(cnt) == int(log2(cnt))):
    print(int(log2(cnt)))
else:
    print(int(log2(cnt))+1)