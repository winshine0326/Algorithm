for i in range(int(input())):
    s = list(input().split())
    print(f"Case #{i+1}:",end=' ')
    for _ in range(len(s)):
        print(s.pop(),end=' ')
    print()