import sys

def dfs(graph, start, visited):
    visited[start] = True
    virusCount = 1

    for computerIndex in graph[start]:
        if visited[computerIndex] == True:
            continue
        
        virusCount += dfs(graph, computerIndex, visited)

    return virusCount

totalComputerCount = int(sys.stdin.readline())  # 컴퓨터 수
computerPairCount = int(sys.stdin.readline())   # 컴퓨터 쌍의 수

# 네트워크 (그래프) 설정
network = [ [] for _ in range(totalComputerCount + 1) ]

for _ in range(computerPairCount):  # 컴퓨터 번호의 쌍을 한 줄씩 처리
    computer1, computer2 = map(int, sys.stdin.readline().split())

    network[computer1].append(computer2)
    network[computer2].append(computer1)

visited = [ [ False ] for _ in range(totalComputerCount + 1) ]
virusComputerCount = dfs(network, 1, visited) - 1   # 자기 자신은 제외

print(virusComputerCount)