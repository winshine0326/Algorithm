s = list(map(int,input().split()))
for i in s:
    if i != 0 and i != 1:
        print("F")
        exit()

print("S")