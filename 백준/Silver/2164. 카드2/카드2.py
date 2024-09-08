from queue import Queue
n = int(input())
queue = Queue()

for i in range(1,n+1):
    queue.put(i)

while queue.qsize()>1:
    queue.get()
    queue.put(queue.get())

print(queue.get())