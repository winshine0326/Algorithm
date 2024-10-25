n = int(input())
arr = list((i for i in range(1,n+1)))
print(sum(arr))
print(sum(arr)**2)
for i in range(n):
    arr[i] = arr[i]**3
print(sum(arr))