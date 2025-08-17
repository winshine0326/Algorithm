for _ in range(int(input())):
    n = int(input())
    while n>0:
        if n >= 5:
            n -= 5
            print("++++ ",end='')
        else:
            n -= 1
            print("|",end='')
    print()
