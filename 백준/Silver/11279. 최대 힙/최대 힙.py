import sys
import heapq

N = int(sys.stdin.readline())
commandList = []
heap = []

for _ in range(N):
    commandList.append(int(sys.stdin.readline()))

for index in range(N):
    if commandList[index] == 0:
        if len(heap) <= 0:
            print(0)
            continue
            
        print(-1 * heapq.heappop(heap))
    else:
        heapq.heappush(heap, -1 * commandList[index])