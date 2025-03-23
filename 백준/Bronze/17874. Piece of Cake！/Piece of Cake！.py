n,w,h = map(int,input().split())
rw = max(n-w,w)
rh = max(n-h,h)
print(rw*rh*4)