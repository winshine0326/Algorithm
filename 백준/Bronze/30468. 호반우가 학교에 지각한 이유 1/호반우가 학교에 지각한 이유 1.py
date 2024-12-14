s = list(map(int,input().split()))
cnt = 0
while (s[0]+s[1]+s[2]+s[3])/4 < s[4]:
    cnt+=1
    s[0]+=1
print(cnt)