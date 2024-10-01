def dfs(c):
    visited[c] = 1
    for i in graph[c]:
        if visited[i]==0:
            dfs(i)

n = int(input())
m = int(input())
graph = [[] for i in range(n+1)]

for i in range(m):
    a,b = map(int,input().split())
    graph[a] += [b]
    graph[b] += [a]

visited = [0]*(n+1)
dfs(1)
print(sum(visited)-1)