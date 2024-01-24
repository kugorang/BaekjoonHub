import sys
from collections import deque

def topological_sort(N, graph, in_degree):
    queue = deque([i for i in range(1, N + 1) if in_degree[i] == 0])
    result = []
    
    while queue:
        vertex = queue.popleft()
        result.append(str(vertex))
        
        for neighbor in graph[vertex]:
            in_degree[neighbor] -= 1
            
            if in_degree[neighbor] == 0:
                queue.append(neighbor)
                
    return ' '.join(result)

N, M = map(int, sys.stdin.readline().split())

graph = [ [] for _ in range(N + 1)]
in_degree = [ 0 ] * (N + 1) # 진입 차수

for _ in range(M):
    A, B = map(int, sys.stdin.readline().split())
    graph[A].append(B)
    in_degree[B] += 1
    
print(topological_sort(N, graph, in_degree).strip())