y1, m1, d1 = map(int, input().split())
y2, m2, d2 = map(int, input().split())

a = 0 
if m1 < m2:
    a = y2 - y1
elif m1 == m2:
    if d1 <= d2:
        a = y2 - y1
    else:
        a = y2 - y1 - 1
else:
    a = y2 - y1 - 1

b = y2 - y1 + 1 
c = y2 - y1     

print(a)
print(b)
print(c)