import sys

sys.setrecursionlimit(10 ** 9)

def dfs(graph, start, visited):
    visited[start] = True

    for value in graph[start]:
        if visited[value] == True:
            continue

        dfs(graph, value, visited)

    return

def IsAllVisited(visited):
    try:
        visited.index(False)
        return False
    except:
        return True

# N: 정점의 개수, M: 간선의 개수
N, M = map(int, sys.stdin.readline().split())

graph = [ [] for _ in range(N + 1) ]

for _ in range(M):
    data1, data2 = map(int, sys.stdin.readline().split())

    graph[data1].append(data2)
    graph[data2].append(data1) 

visited = [ False for _ in range(N + 1) ]
visited[0] = True

elementCount = 0

while IsAllVisited(visited) == False:
    dfs(graph, visited.index(False), visited)
    elementCount += 1

print(elementCount)