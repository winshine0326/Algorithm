n = int(input())
table = {
    "kg":[2.2046,"lb"],
    "l":[0.2642,"g"],
    "lb":[0.4536,"kg"],
    "g":[3.7854,"l"],
}
for _ in range(n):
    li = input().split()
    a = float(li[0])
    b = li[1]
    print("%.4f"%(a*table[b][0]),table[b][1])

