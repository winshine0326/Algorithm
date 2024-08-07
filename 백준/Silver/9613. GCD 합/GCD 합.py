import math,sys

n = int(input())
for _ in range(n):
    li = list(map(int, sys.stdin.readline().split()))
    result=0
    for x in range(1,len(li)):
        for y in range(x+1,len(li)):
            result+=math.gcd(li[x],li[y])

    print(result)