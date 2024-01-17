import sys

# N = int(sys.stdin.readline())
N = int(input())
resultList = []

for _ in range(N):
    # resultList.append(sys.stdin.readline())
    resultList.append(input())

resultList = list(set(resultList))
resultList.sort(key = lambda x: (len(x), x))

for number in resultList:
    print(number)