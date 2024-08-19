import heapq,sys

input = sys.stdin.readline
t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    result = 1
    heapq.heapify(arr)

    while len(arr) > 1:
        temp = heapq.heappop(arr)*heapq.heappop(arr)
        result *= temp
        heapq.heappush(arr, temp)

    print(result%1000000007)


