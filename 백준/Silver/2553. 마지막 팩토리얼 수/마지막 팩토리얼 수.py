n = int(input())
result = 1

for i in range(1,n+1):
    result *= i

result = str(result)

for i in range(len(result)-1,-1,-1):
    if not int(result[i]) == 0:
        print(result[i])
        break