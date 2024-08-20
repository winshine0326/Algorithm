import heapq,sys

input = sys.stdin.readline

heap = []
heapq.heapify(heap)

n = int(input())
for _ in range(n):
    query = int(input())
    if query != 0:
        heapq.heappush(heap, query)
    else:
        if(len(heap)==0):
            print("0")
        else:
            print(heapq.heappop(heap))

