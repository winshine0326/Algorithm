n = int(input())
if n%2:
    print((2**((n+1)//2))%16769023)
else:
    print((2**(n//2))%16769023)