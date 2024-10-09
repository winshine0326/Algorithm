import sys
sys.setrecursionlimit(10**6)

dx = [1, -1, 0, 0]
dy = [0, 0, 1, -1]
def dfs(i,j):
    graph[i][j] = 0
    for k in range(4):
        ni = i + dx[k]
        nj = j + dy[k]
        if 0 <= ni < a and 0 <= nj < b and graph[ni][nj] == 1:
            dfs(ni, nj)

t = int(input())
for i in range(t):
    a,b,n = map(int,input().split())
    graph = [[0]*b for _ in range(a)]
    count = 0
    for i in range(n):
        x,y = map(int,input().split())
        graph[x][y]=1

    for i in range(a):
        for j in range(b):
            if graph[i][j]==1:
                dfs(i,j)
                count+=1
    print(count)

