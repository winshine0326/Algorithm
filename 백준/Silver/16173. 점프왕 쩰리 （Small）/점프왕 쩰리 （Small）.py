n = int(input())
graph = []
for _ in range(n):
    graph.append(list(map(int,input().split())))

def dfs(x,y):
    if x>=n or y>=n:
        return False
    elif x==n-1 and y==n-1:
        return True
    move = graph[x][y]
    if move == 0:
        return False
    return dfs(move + x, y) or dfs(x, y + move)

if dfs(0,0):
    print('HaruHaru')
else:
    print('Hing')