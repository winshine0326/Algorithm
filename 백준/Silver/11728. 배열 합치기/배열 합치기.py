a,b = map(int,input().split())
li1 = list(map(int,input().split()))
li2 = list(map(int,input().split()))
for i in li2:
    li1.append(i)
li1.sort()

for i in li1:
    print(i,end=" ")