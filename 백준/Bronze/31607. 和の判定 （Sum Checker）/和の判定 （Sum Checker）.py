a=int(input())
b=int(input())
c=int(input())

num=[a,b,c]
num.sort()
if (num[0]+num[1])==num[2]:
    print(1)
else:
    print(0)