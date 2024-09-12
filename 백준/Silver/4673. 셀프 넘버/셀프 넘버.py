def f(n):
    temp = 0
    temp+=n
    n = str(n)
    for j in range(len(n)):
        temp+=int(n[j])
    return temp

result = set()
for i in range(10000):
    result.add(f(i))
for j in range(1,10001):
    if not j in result:
        print(j)
