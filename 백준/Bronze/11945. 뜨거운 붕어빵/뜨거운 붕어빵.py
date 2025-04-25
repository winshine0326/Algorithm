h,w = map(int,input().split())
for _ in range(h):
    s = input()
    s = list(s)
    for i in range(len(s)):
        print(s.pop(),end='')
    print()