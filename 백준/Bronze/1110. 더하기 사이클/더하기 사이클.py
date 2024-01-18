N = int(input())

currentNumber = (N % 10 * 10) + (N // 10 + N % 10) % 10
loopCount = 1

while currentNumber != N:
    currentNumber = (currentNumber % 10 * 10) + (currentNumber // 10 + currentNumber % 10) % 10
    loopCount += 1
    
print(loopCount)