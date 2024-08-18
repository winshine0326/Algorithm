n,m = map(int,input().split())
arr = []
index_dic = {}

for i in range(n):
    word = input()
    arr.append(word)
    index_dic[word] = i+1

for i in range(m):
    order = input()
    if order.isdigit():
        print(arr[int(order)-1])
    else:
        print(index_dic[order])