def plusCycle(N):
    return  (N % 10 * 10) + (N // 10 + N % 10) % 10

N = int(input())

currentNumber = plusCycle(N)
loopCount = 1

while currentNumber != N:
    currentNumber = plusCycle(currentNumber)
    loopCount += 1
    
print(loopCount)