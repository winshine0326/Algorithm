n,f = map(int,input().split())
dict = {}
for _ in range(n):
    k,v = input().split()
    dict[k] = v

for _ in range(f):
    s = input()
    print(dict[s])