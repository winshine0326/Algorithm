n = int(input())
s = list(map(int,input().split()))
count = 0
for i in s:
    if i==n:
        count+=1
print(count)