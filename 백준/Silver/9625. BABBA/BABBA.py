n = int(input())
a = [0,1]
b = [1,1]
for i in range(2,n+1):
    a.append(a[i-1]+a[i-2])
    b.append(b[i-1]+b[i-2])
print(a[n-1],b[n-1])