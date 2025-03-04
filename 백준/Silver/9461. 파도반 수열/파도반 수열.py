t = int(input())
dp = [1,1,1]
n = []
for _ in range(t):
    n.append(int(input()))
for i in range(3,max(n)):
    dp.append(dp[i-2]+dp[i-3])

for i in n:
    print(dp[i-1])
