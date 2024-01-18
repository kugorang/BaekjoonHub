# 1182번 부분 수열의 합 문제에서 부분 수열이란 해당 수열에 있는 수들의 모든 조합을 말합니다.
# 예를 들면, 아래 수열의 경우
# [1, 2, 1, 3, 5, 6]
# [2, 1, 3] 처럼 수들이 연속된 경우 뿐만 아니라, [1, 1, 3] 처럼 불연속적으로 선택된 수들도 부분 수열입니다.
# 다만 아무 것도 선택하지 않는 경우([ ])는 제외됩니다.

import sys
from itertools import combinations

N, S = map(int, sys.stdin.readline().split())
numList = list(map(int, sys.stdin.readline().split()))
combinationList = []

for count in range(1, len(numList) + 1):
    combinationList.append(combinations(numList, count))

combinationCount = 0

for combination in combinationList:
    for element in combination:
        if sum(list(element)) == S:
            combinationCount += 1
            
print(combinationCount)