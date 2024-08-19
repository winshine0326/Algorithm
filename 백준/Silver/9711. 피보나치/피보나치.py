n = int(input())
fibo = [1,1]
a,b=1,1

for _ in range(10005):
    a,b = b, a+b
    fibo.append(a)

for i in range(n):
    query = list(map(int,input().split()))
    print("Case #",end='')
    print(i+1,end='')
    print(':',fibo[query[0]]%query[1])