def dfs(graph, start, visited):
    visited[start] = True
    virusCount = 1

    for computerIndex in graph[start]:
        if visited[computerIndex] == True:
            continue
        
        virusCount += dfs(graph, computerIndex, visited)

    return virusCount

totalComputerCount = int(input())
computerPairCount = int(input())

network = [ [] for _ in range(totalComputerCount + 1) ]

for _ in range(computerPairCount):
    computer1, computer2 = map(int, input().split())

    network[computer1].append(computer2)
    network[computer2].append(computer1)

visited = [ [ False ] for _ in range(totalComputerCount + 1) ]
virusComputerCount = dfs(network, 1, visited) - 1   # 자기 자신은 제외

print(virusComputerCount)