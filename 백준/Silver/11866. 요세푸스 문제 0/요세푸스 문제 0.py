import sys

N, K = map(int, sys.stdin.readline().split())

peopleList = []
josephusPermutation = []
currentIndex = 0

for index in range(1, N + 1):
    peopleList.append(index)

while len(peopleList) > 0:
    currentIndex = (currentIndex + K - 1) % len(peopleList)
    peopleNumber = peopleList.pop(currentIndex)

    josephusPermutation.append(peopleNumber)

outputString = ", ".join(map(str, josephusPermutation))

print(f"<{outputString}>")