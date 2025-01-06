s = input()
while s != 'END':
    for i in range(len(s)-1,-1,-1):
        print(s[i],end='')
    print()
    s = input()