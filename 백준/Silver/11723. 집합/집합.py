import sys
n = int(input())
a = set()
for _ in range(n):
    query = sys.stdin.readline().strip().split()
    if query[0] == "add":
        a.add(int(query[1]))
    elif query[0] == "remove":
        a.discard(int(query[1]))
    elif query[0] == "check":
        if int(query[1]) in a:
            print("1")
        else:
            print("0")
    elif query[0] == "toggle":
        if int(query[1]) in a:
            a.remove(int(query[1]))
        else:
            a.add(int(query[1]))
    elif query[0] == "all":
        a = {i for i in range(1, 21)}
    elif query[0] == "empty":
        a = set()
