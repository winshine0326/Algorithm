n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))
dp = [0]*n

if n<=2:
    print(sum(arr))
else:    
    dp[0] = arr[0]
    dp[1] = arr[1]+arr[0]
    for i in range(2,n):
        dp[i] = max(dp[i-3]+arr[i-1]+arr[i], dp[i-2]+arr[i])
    
    print(dp[n-1])