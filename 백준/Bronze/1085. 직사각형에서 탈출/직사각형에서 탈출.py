x, y, w, h = map(int, input().split())

# 왼쪽
result = x

# 오른쪽
result = min(result, w - x)

# 위쪽
result = min(result, h - y)

# 아래쪽
result = min(result, y)

print(result)