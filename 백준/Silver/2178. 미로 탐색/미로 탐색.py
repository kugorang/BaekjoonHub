import sys
from collections import deque


def bfs(graph, start, visited, goal):
    queue = deque([(start, 1)])  # 시작점의 레벨을 1로 시작

    while queue:
        vertex, level = queue.popleft()
        
        if vertex == goal:
            return level

        for next in graph[vertex]:
            if not visited[next]:
                visited[next] = True
                queue.append((next, level + 1))  # 다음 노드와 레벨을 큐에 추가
                
    return -1


# N: 행 개수, M: 열 개수
N, M = map(int, sys.stdin.readline().split())
maze = []
graph = {}
visited = {}

for i in range(N):
    mazeNumber = sys.stdin.readline().strip()
    mazeRow = []

    for j, num in enumerate(mazeNumber):
        mazeRow.append(int(num))
        graph[(i, j)] = []
        visited[(i, j)] = False

    maze.append(mazeRow)

for row in range(N):  # 행
    for column in range(M):  # 열
        if maze[row][column] == 1:
            if column - 1 >= 0 and maze[row][column - 1] == 1:  # 왼쪽
                graph[(row, column)].append((row, column - 1))
            if column + 1 < M and maze[row][column + 1] == 1:  # 오른쪽
                graph[(row, column)].append((row, column + 1))
            if row - 1 >= 0 and maze[row - 1][column] == 1:  # 위쪽
                graph[(row, column)].append((row - 1, column))
            if row + 1 < N and maze[row + 1][column] == 1:  # 아래쪽
                graph[(row, column)].append((row + 1, column))

goal = (N - 1, M - 1)  # 목적지 설정
print(bfs(graph, (0, 0), visited, goal))