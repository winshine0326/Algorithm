max = list(map(int,input().split()))
mel = list(map(int,input().split()))
if (max[0]*3+max[1]*20+max[2]*120) > (mel[0]*3+mel[1]*20+mel[2]*120):
    print("Max")
elif (max[0]*3+max[1]*20+max[2]*120) < (mel[0]*3+mel[1]*20+mel[2]*120):
    print("Mel")
else:
    print("Draw")