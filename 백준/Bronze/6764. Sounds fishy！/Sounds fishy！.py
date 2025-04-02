li = [int(input()) for _ in range(4)]
r = 0
for i in range(3):
    if li[i+1] > li[i]:
        r += 1
    elif li[i+1] < li[i]:
        r -= 1

if len(set(li)) == 1: 
    print("Fish At Constant Depth")
elif r == 3:
    print("Fish Rising")
elif r == -3:    
    print("Fish Diving")
else:
    print("No Fish")