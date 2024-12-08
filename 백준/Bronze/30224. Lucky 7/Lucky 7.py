n = input()
if int(n)%7!=0 and "7" not in n:
    print(0)
elif int(n)%7==0 and "7" not in n:
    print(1)
elif "7" in n and int(n)%7!=0:
    print(2)
else:
    print(3)