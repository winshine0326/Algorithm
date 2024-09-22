n = int(input())
end = 666
cnt = 0
while 1:
    if '666' in str(end):
        cnt += 1
    if cnt==n:
        break
    end+=1
print(end)