n = int(input())
res = str(bin(n))
if res[0] == '-':
    print(32)
else:
    print(len(res[2:]))