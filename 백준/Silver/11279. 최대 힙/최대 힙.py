import heapq,sys

input = sys.stdin.readline
n = int(input())
queue = []
for i in range(n):
    num = int(input())
    if num!=0:
        heapq.heappush(queue,[-num,num])
    else:
        if len(queue)==0:
            print(0)
        else:
            print(-heapq.heappop(queue)[0])