never = ["Never gonna give you up",
"Never gonna let you down",
"Never gonna run around and desert you",
"Never gonna make you cry",
"Never gonna say goodbye",
"Never gonna tell a lie and hurt you",
"Never gonna stop"]

t = int(input())
swt = 1
for _ in range(t):
    s = input()
    if s not in never:
        print("Yes")
        swt = 0
        break

if swt:
    print("No")