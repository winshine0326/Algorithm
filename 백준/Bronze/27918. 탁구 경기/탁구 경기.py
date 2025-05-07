x,y = 0,0
for _ in range(int(input())):
    s = input()
    if s == 'D':
        x+=1
    else:
        y+=1
    if abs(x-y) == 2:
        break

print(f'{x}:{y}')