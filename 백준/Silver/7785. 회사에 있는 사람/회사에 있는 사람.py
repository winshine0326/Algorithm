n = int(input())
people = {}
result = []
for _ in range(n):
    name,stay = input().split()
    if name in people and people[name]:
        people[name] = 0
    else:
        people[name] = 1

for key,value in people.items():
    if value:
        result.append(key)

result2 = sorted(result,reverse=True)

for i in result2:
    print(i)