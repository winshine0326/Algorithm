score = list(map(int,input().split()))
max_score = [100,100,200,200,300,300,400,400,500]
hacker = False
for i in range(9):
    if score[i] > max_score[i]:
        hacker = True
if hacker:
    print("hacker")
elif sum(score) < 100:
    print("none")
else:
    print("draw")