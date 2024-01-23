import sys
from collections import deque


def bfs():
    global graph, visited, K, X

    queue = deque([(X, 0)])
    cityIndices = []

    visited[X] = True

    while queue:
        currentVertex, count = queue.popleft()

        if count == K:
            cityIndices.append(currentVertex)

        for vertex in graph[currentVertex]:
            if not visited[vertex]:
                visited[vertex] = True
                
                if count < K:
                    queue.append((vertex, count + 1))

    return cityIndices


# N: 도시의 개수, M: 도로의 개수, K: 거리 정보, X: 출발 도시의 번호
N, M, K, X = map(int, sys.stdin.readline().split())
graph = [[] for _ in range(N + 1)]

for _ in range(M):
    A, B = map(int, sys.stdin.readline().split())
    graph[A].append(B)

visited = [False for _ in range(N + 1)]

cityIndices = bfs()

if len(cityIndices) <= 0:
    print(-1)
else:
    cityIndices.sort()
    for cityIndex in cityIndices:
        print(cityIndex)
