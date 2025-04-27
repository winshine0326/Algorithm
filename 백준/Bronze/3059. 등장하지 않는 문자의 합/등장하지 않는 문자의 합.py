for _ in range(int(input())):
    s = input()
    res = sum(range(65, 91))
    rem = set()
    for i in s:
        rem.add(i)
    for i in rem:
        res-=ord(i)
    print(res)