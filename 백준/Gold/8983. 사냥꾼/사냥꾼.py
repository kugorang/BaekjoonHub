import sys

M, N, L = map(int, sys.stdin.readline().split())
m_x_cordinates = list(map(int, sys.stdin.readline().strip().split()))
m_x_cordinates.sort()

n_cordinates = []

for _ in range(N):
    n_x, n_y = sys.stdin.readline().split()
    n_cordinates.append((int(n_x), int(n_y)))

resultCount = 0

# 동물들이 사대의 사정 거리 안에 있는지 확인
for n_index in range(N):
    for m_index in range(0, M):
        current_m_x = m_x_cordinates[m_index]

        # 동물에서 사대까지의 거리 계산 (문제에 제시된 공식 사용)
        fromAnimalToSadae = abs(current_m_x - n_cordinates[n_index][0]) \
        + n_cordinates[n_index][1]

        # 현재 동물 좌표가 사대 위치 사정거리 안에 있는지 확인
        if L >= fromAnimalToSadae:
            # 사정 거리보다 동물과의 거리가 작다면 Catch!
            resultCount += 1
            break

print(resultCount)