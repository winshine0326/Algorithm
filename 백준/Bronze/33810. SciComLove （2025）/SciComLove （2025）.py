s = input()
res = "SciComLove"
cnt = 0
for i in range(len(res)):
    if s[i] != res[i]:
        cnt += 1

print(cnt)