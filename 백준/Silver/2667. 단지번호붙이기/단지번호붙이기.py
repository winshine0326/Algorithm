n = int(input())
graph = []
for _ in range(n):
    temp = []
    s = input()
    for i in s:
        temp.append(int(i))
    graph.append(temp)

result = []
def dfs(x,y):
    if x >= n or y >= n or x < 0 or y < 0 or graph[x][y] == 0:
        return 0

    graph[x][y] = 0
    count = 1

    count += dfs(x+1,y)
    count += dfs(x,y+1)
    count += dfs(x-1,y)
    count += dfs(x,y-1)

    return count

for i in range(n):
    for j in range(n):
        if graph[i][j] == 1:
            result.append(dfs(i,j))

print(len(result))
result.sort()
for i in result:
    print(i)