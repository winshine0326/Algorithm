dp = [1,2]
n = int(input())
for i in range(2,n+1):
    dp.append((dp[i-1]+dp[i-2])%10007)

print(dp[n-1]%10007)