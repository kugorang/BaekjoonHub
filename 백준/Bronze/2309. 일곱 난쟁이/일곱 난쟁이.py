from itertools import combinations
import sys

N = 9
hobbitsHeight = []
heightSubsets = []

for _ in range(N):
    hobbitHeight = int(sys.stdin.readline())
    hobbitsHeight.append(hobbitHeight)

# combinations는 tuple이 반환됨
heightSubsets = list(combinations(hobbitsHeight, 7))

for subset in heightSubsets:
    if sum(subset) == 100:
        subset = list(subset)
        subset.sort()

        for element in subset:
            print(element)

        break