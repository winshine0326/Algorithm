n = int(input())
hascard = list(map(int,input().split()))
hascard.sort()

m = int(input())
wantcard = list(map(int,input().split()))

resultlist = []

for i in wantcard:
    start = 0
    end = len(hascard)-1
    found = False

    while start <= end:
        mid = (start+end)//2

        if i == hascard[mid]:
            found = True
            break
        elif i > hascard[mid]:
            start = mid+1
        else:
            end = mid-1

    if found:
        resultlist.append(1)
    else:
        resultlist.append(0)

for i in resultlist:
    print(i,end=' ')

