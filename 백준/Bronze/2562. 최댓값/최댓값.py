maxNumber = int(input())
maxIndex = 1

for i in range(2, 10):
    currentNumber = int(input())
    
    if currentNumber > maxNumber:
        maxNumber = currentNumber
        maxIndex = i
        
print(maxNumber)
print(maxIndex)