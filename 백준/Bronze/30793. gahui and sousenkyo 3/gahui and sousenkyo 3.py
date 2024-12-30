a,b = map(int,input().split())
r = a/b
if r < 0.2:
    print("weak")
elif r<0.4:
    print("normal")
elif r<0.6:
    print("strong")
else:
    print("very strong")