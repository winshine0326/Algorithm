n="default"
while 1:
    count = 0
    n = input()
    if n=="#":
        break
    count += n.count('a')
    count += n.count('A')
    count += n.count('e')
    count += n.count('E')
    count += n.count('i')
    count += n.count('I')
    count += n.count('o')
    count += n.count('O')
    count += n.count('u')
    count += n.count('U')
    print(count)