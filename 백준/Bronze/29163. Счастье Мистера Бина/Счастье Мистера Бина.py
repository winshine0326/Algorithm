n = int(input())
li = list(map(int,input().split()))

hol = 0
jjak = 0

for i in li:
    if i%2:
        hol+=1
    else:
        jjak += 1

if jjak > hol:
    print("Happy")
else:
    print("Sad")
