n = int(input())
t = int(input())
s = list(map(int,input().split()))
if n<=sum(s):
    print("Padaeng_i Happy")
else:
    print("Padaeng_i Cry")