meow = [list(input().split()) for _ in range(15)]
rs = ""
for i in meow:
    if 'w' in i:
        rs="chunbae"
    elif 'b' in i:
        rs="nabi"
    elif 'g' in i:
        rs="yeongcheol"

print(rs)