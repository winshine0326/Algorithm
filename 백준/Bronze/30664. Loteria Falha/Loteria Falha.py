while 1:
    n = int(input())
    if not n:
        break;
    if(n%42):
        print("TENTE NOVAMENTE")
    else:
        print("PREMIADO")