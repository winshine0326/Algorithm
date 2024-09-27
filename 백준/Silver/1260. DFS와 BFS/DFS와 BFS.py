def dfs(item):
    for i in range(n):
        dfsVisited[item] = 1
        if graph[item][i] == 1 and not dfsVisited[i]:
            print(i + 1, end=' ')
            dfs(i)

def bfs(item):
    queue = [item]
    visited[item] = 1
    while queue:
        temp = queue.pop(0)
        print(temp+1, end=' ')

        for i in range(n):
            if graph[temp][i] and not visited[i]:
                queue.append(i)
                visited[i] = 1


n,m,v = map(int,input().split())
graph = [[0 for _ in range(n)] for _ in range(n)]


for i in range(m):
    a,b = map(int,input().split())
    graph[a-1][b-1] = 1
    graph[b-1][a-1] = 1

dfsVisited = [0] * n
visited = [0] * n

print(v,end=' ')
dfs(v-1)
print()
bfs(v-1)

