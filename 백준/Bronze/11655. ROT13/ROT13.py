s = input()
for i in s:
    if ord("a")<= ord(i) <= ord("z"):
        print(chr(((ord(i)+13-ord('a'))%26)+ord("a")),end='')
    elif ord("A")<= ord(i) <= ord("Z"):
        print(chr(((ord(i)+13-ord('A'))%26)+ord("A")),end='')
    else:
        print(i,end='')