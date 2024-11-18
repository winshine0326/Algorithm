n = int(input())

dp = [0]

for i in range(1,n+1):
    dp.append(i-1+dp[i-1])

print(dp[n])