import sys

T = int(sys.stdin.readline())
resultList = []

for _ in range(T):
    A, B = map(int, sys.stdin.readline().split())
    resultList.append(A + B)

for result in resultList:
    print(result)