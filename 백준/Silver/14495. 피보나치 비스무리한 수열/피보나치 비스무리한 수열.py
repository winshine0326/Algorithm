n = int(input())
li = [1, 1, 1]
for i in range(n+1):
    li.append((li[-1]+li[-3]))
print(li[n-1])