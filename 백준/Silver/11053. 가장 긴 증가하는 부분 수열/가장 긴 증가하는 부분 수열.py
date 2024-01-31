import sys

A = int(sys.stdin.readline())
LIS = [ 1 ] * A

sequence = list(map(int, sys.stdin.readline().split()))

for srcIndex in range(A):
    for destIndex in range(srcIndex):
        if sequence[destIndex] < sequence[srcIndex]:
            LIS[srcIndex] = max(LIS[srcIndex], LIS[destIndex] + 1)

# 리스트의 가장 끝의 값이 아닌 리스트에서 가장 큰 값을 출력할 것
print(max(LIS))