import sys

n = int(sys.stdin.readline())
arr = []

for i in range(n):
    arr.append(sys.stdin.readline().strip())

setArr = set(arr)
arr = list(setArr)
arr.sort()
arr.sort(key = len)

for i in arr:
    print(i)
