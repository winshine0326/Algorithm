n = int(input())
arr = map(int,input().split())
result = sum(arr)
if result >0:
    print("Right")
elif result < 0:
    print("Left")
else:
    print("Stay")