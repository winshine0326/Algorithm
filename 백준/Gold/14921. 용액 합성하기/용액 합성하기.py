import sys
n = int(input())
arr = list(map(int, sys.stdin.readline().split()))
start = 0
end = n-1
min = arr[start]+arr[end]
while start < end:
    temp = arr[start]+arr[end]
    if abs(temp) < abs(min):
        min = temp
    if temp < 0:
        start += 1
    else:
        end -= 1
print(min)