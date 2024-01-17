from itertools import combinations
import sys

N = 9
hobbitsHeight = []
heightSubsets = []

for _ in range(N):
    hobbitHeight = int(sys.stdin.readline())
    hobbitsHeight.append(hobbitHeight)

# combinations는 tuple이 반환됨
heightSubsets = list(combinations(hobbitsHeight, 2))
totalHobbitHeight = sum(hobbitsHeight)

for subset in heightSubsets:
    if (totalHobbitHeight - sum(subset)) == 100:
        hobbitsHeight = list(set(hobbitsHeight) - set(subset))
        hobbitsHeight.sort()
        
        for height in hobbitsHeight:
            print(height)

        break