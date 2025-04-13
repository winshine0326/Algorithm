s = int(input())
a,b,c = map(int,input().split())
if s<=a+b+c or s <= 240:
    print("high speed rail")
else:
    print("flight")