while(1):
    n = int(input())
    sum = 0
    if n==0:
        break
    for i in range(1,n+1):
        sum+=i
    print(sum)

