import sys


def dfs(row, col):
    global tile, visited
    visited[row][col] = True

    if tile[row][col] == "-":
        if col + 1 >= M or tile[row][col + 1] == "|" or visited[row][col + 1]:
            return 1

        return dfs(row, col + 1)
    elif tile[row][col] == "|":
        if row + 1 >= N or tile[row + 1][col] == "-" or visited[row + 1][col]:
            return 1

        return dfs(row + 1, col)

    return 0


# 세로 크기(행) : N, 가로 크기(열) : M (N과 M은 50 이하의 자연수)
N, M = map(int, sys.stdin.readline().split())

tile = [[] for _ in range(N)]
visited = [[False] * M for _ in range(N)]

for row in range(N):
    tile[row] = list(sys.stdin.readline().strip())  # 문자열 자르기

tileCount = 0

for row in range(N):
    for col in range(M):
        if not visited[row][col]:
            tileCount += dfs(row, col)

print(tileCount)
