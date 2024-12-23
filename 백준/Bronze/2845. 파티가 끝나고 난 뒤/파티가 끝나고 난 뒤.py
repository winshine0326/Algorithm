a,b = map(int,input().split())
s = list(map(int,input().split()))
for i in s:
    print(i-(a*b),end=' ')