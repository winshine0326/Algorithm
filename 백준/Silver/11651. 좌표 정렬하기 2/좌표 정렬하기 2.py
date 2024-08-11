t = int(input())
arr = []
for i in range(t):
    a,b = map(int,input().split())
    arr.append([])
    arr[i].append(a)
    arr[i].append(b)
arr.sort(key=lambda x:x[0])
arr.sort(key=lambda x:x[1])
for i in arr:
    print(i[0], i[1])