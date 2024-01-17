N = int(input())
resultList = []

for _ in range(N):
    resultList.append(int(input()))

resultList.sort()

for number in resultList:
    print(number)