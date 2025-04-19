for _ in range(int(input())):
    x,y = map(int,input().split())

    if 0<=x<=23 and 0<=y<=59:
        print("Yes",end=' ')
    else:
        print("No",end=' ')

    if 1<=x<=12 and 1<=y<=31:
        if x == 4 or x == 6 or x == 9 or x == 11:
            if 1<=y<=30:
                print("Yes")
            else:
                print("No")
        elif x==2:
            if 1<=y<=29:
                print("Yes")
            else:
                print("No")
        else:
            if 1<=y<=31:
                print("Yes")
            else:
                print("No")

    else:
        print("No")