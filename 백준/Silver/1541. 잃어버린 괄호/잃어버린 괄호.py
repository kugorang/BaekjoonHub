import sys
from collections import deque

totalFormula = sys.stdin.readline().split('-')
queue = deque()

for plusFormula in totalFormula:
    numbers = plusFormula.split('+')
    
    sum = 0

    for number in numbers:
        sum += int(number)

    queue.append(sum)

result = queue.popleft()

for number in queue:
    result -= number

print(result)