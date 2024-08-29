b,c,d = map(int,input().split())
burger = list(map(int,input().split()))
side = list(map(int,input().split()))
drink = list(map(int,input().split()))

burger.sort(reverse=True)
side.sort(reverse=True)
drink.sort(reverse=True)

result = 0
sum = sum(burger)+sum(side)+sum(drink)

for i in range(max(len(burger),len(side),len(drink))):
    swt = 0
    temp = 0
    if len(burger) > i:
        temp += burger[i]
        swt += 1
    if len(side) > i:
        temp += side[i]
        swt += 1
    if len(drink) > i:
        temp += drink[i]
        swt += 1

    if(swt==3):
        dis = temp/10
    else:
        dis = 0
    result += temp - dis

print(sum)
print(int(result))