import sys
input = sys.stdin.readline

n = int(input())
liq = list(map(int, input().split()))

left_point = 0
right_point = n-1
min = abs(liq[left_point]+liq[right_point])
result_left = left_point
result_right = right_point

while left_point < right_point:
    value = liq[left_point] + liq[right_point]
    if abs(value) < min:
        result_left = left_point
        result_right = right_point
        min = abs(value)
        if min == 0:
            break

    if value < 0:
        left_point += 1
    else:
        right_point -= 1

print(liq[result_left], liq[result_right])