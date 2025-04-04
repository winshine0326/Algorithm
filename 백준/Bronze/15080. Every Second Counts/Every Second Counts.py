from datetime import datetime, timedelta
h1, d1, m1 = map(int, input().split(":"))
h2, d2, m2 = map(int, input().split(":"))
start = timedelta(hours=h1, minutes=d1, seconds=m1)
end = timedelta(hours=h2, minutes=d2, seconds=m2)
print((end - start).seconds)