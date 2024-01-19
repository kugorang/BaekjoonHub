import sys
from collections import deque

# def dfs(graph, v, visited):
#     visited[v] = True
#     print(v, end=' ')

#     for i in graph[v]:
# if not visited[i]:
#             dfs(graph, i, visited)


def dfs(graph, v, visited):
    stack = deque([v])

    while stack:
        current = stack.pop()

        if not visited[current]:
            visited[current] = True
            print(current, end=" ")

            for i in reversed(graph[current]):
                if not visited[i]:
                    stack.append(i)


def bfs(graph, start, visited):
    queue = deque([start])
    visited[start] = True

    while queue:
        v = queue.popleft()
        print(v, end=" ")

        for i in graph[v]:
            if not visited[i]:
                queue.append(i)
                visited[i] = True


# N: 정점의 개수, M: 간선의 개수, V: 시작 정점 번호
N, M, V = map(int, sys.stdin.readline().split())

graph = [[] for _ in range(N + 1)]

for _ in range(M):
    x, y = map(int, sys.stdin.readline().split())
    graph[x].append(y)
    graph[y].append(x)

for index in range(N + 1):
    graph[index].sort()  # 정렬 이유: 정점 번호가 작은 것을 먼저 방문해야 하기 때문

visited = [False] * (N + 1)
dfs(graph, V, visited)

print()

visited = [False] * (N + 1)
bfs(graph, V, visited)