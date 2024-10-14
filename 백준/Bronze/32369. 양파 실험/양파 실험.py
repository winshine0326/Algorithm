n,a,b = map(int,input().split())
chingchan = 1
binan = 1
for i in range(n):
    chingchan += a
    binan += b
    if chingchan <binan:
        chingchan,binan = binan,chingchan
    elif chingchan == binan:
        binan-=1
print(chingchan,binan)