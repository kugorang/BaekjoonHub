import sys

# N, K = map(int, sys.stdin.readline().split())
N, K = map(int, input().split())

coinType = []

for _ in range(N):
    # coinType.append(int(sys.stdin.readline()))
    coinType.append(int(input()))

coinCount = 0
coinIndex = N - 1

while K > 0:
    coinCount += (K // coinType[coinIndex])
    K %= coinType[coinIndex]
    
    coinIndex -= 1

print(coinCount)