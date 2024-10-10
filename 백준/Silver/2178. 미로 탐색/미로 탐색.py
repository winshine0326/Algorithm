from collections import deque

dx = [1,-1,0,0]
dy = [0,0,1,-1]

queue = deque()
n,m = map(int,input().split())
graph = []
for _ in range(n):
    a = input()
    temp = []
    for i in a:
        temp.append(int(i))
    graph.append(temp)

def bfs(x,y):
    queue.append((x, y))
    while queue:
        x,y = queue.popleft()
        if x == n-1 and y == m-1:
            break
        for i in range(4):
            nx = x + dx[i]
            ny = y + dy[i]
            if 0<=nx<n and 0<=ny<m and graph[nx][ny]==1:
                graph[nx][ny] = graph[x][y] + 1
                queue.append((nx, ny))
    return graph[n-1][m-1]

print(bfs(0,0))