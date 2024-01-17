N = int(input())

sourceNumbers = map(int, input().split())
sourceNumbers = set(sourceNumbers)

M = int(input())

targetNumbers = map(int, input().split())

for targetNumber in targetNumbers:
    if targetNumber in sourceNumbers:
        print(1)
    else:
        print(0)