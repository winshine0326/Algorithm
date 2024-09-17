n = int(input())
string = []
for i in range(n):
    string.append(input())

for i, s in enumerate(string, 1):
    print(f"{i}. {s}")