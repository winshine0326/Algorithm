while True:
    try:
        s = input()
        for i in s:
            if i == 'e':
                print('i',end='')
            elif i=='i':
                print("e",end='')
            elif i=='E':
                print('I',end='')
            elif i=='I':
                print('E',end='')
            else:
                print(i,end='')
        print()
    except EOFError:
        break