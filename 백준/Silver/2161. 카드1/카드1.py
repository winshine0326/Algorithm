import queue
n = int(input())
q = queue.Queue()

for i in range(1,n+1):
    q.put(i)


sw = 1

while not q.empty():
    if sw:
        print(q.get(),end=' ')
    else:
        q.put(q.get())
    sw = not sw
