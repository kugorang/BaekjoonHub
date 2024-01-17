import sys

N = int(sys.stdin.readline())
resultList = []

for _ in range(N):
    resultList.append(int(sys.stdin.readline()))

resultList.sort()

for number in resultList:
    print(number)