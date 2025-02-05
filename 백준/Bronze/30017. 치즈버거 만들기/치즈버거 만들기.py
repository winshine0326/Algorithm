meat, cheese = map(int,input().split())
if meat<=cheese:
    print(meat*2-1)
else:
    print(cheese*2+1)