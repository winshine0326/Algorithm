n = int(input())
a,b = map(int,input().split())
t = int(input())
graph = {k:[] for k in range(n+1)}

for _ in range(t):
    x,y = map(int,input().split())
    graph[x].append(y)
    graph[y].append(x)


visit = []
def dfs(c,count):
    global flag
    visit.append(c)
    if c == b:
        print(count)
        flag = True
        return
    else:
        for i in graph[c]:
            if not i in visit:
                dfs(i,count+1)
                if flag:
                    return
flag = False
dfs(a,0)
if not flag:
    print(-1)
