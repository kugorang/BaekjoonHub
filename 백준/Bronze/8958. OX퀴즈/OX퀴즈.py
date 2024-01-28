import sys

T = int(sys.stdin.readline())

for _ in range(T):
    testCase = list(sys.stdin.readline())
    combo = 0
    score = 0

    for result in testCase:
        if result == 'O':
            combo += 1
            score += combo
        else:
            combo = 0

    print(score)