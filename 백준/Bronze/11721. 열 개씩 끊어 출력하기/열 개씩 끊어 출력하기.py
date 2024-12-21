s = input()
cnt = 0
for i in s:
    print(i,end='')
    cnt+=1
    if cnt==10:
        print()
        cnt=0