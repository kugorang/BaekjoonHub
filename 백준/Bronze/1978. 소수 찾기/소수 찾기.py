import math

numberCount = int(input())
numbers = [int(x) for x in input().split()]
primeNumberCount = 0

for numberIndex in range(0, numberCount):
    isPrimeNumber = True

    if numbers[numberIndex] <= 1:
        continue;

    for compareNumber in range(2, (int)(math.sqrt(numbers[numberIndex])) + 1):
        if numbers[numberIndex] % compareNumber == 0:
            isPrimeNumber = False
            break

    if isPrimeNumber:
        primeNumberCount += 1

print(primeNumberCount)