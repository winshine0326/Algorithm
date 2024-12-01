t,n = map(int,input().split())
temp = []
for _ in range(t):
    a = int(input())
    temp.append(a)

sumN = sum(temp)

for i in temp:
    print((n//sumN)*i)