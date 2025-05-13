a1,b1,c1 = map(int,input().split())
a2,b2,c2 = map(int,input().split())

r1 = a1+(b1*2)+(c1*3)
r2 = a2+(b2*2)+(c2*3)

if r1>r2:
    print(1)
elif r1<r2:
    print(2)
else:
    print(0)