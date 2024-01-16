# 첫 번째 줄 입력: M N L
# M: 사대의 수 (1 <= M <= 100,000)
# N: 동물의 수 (1 <= N <= 100,000)
# L: 사정거리 (1 <= L <= 1,000,000,000)

# 두 번째 줄 입력: 각 사대의 x-좌표 값
# 사대의 위치를 나타내는 M개의 x-좌표 값이 빈칸을 사이에 두고 양의 정수로 주어짐

# 이후 N개의 각 줄에는 각 동물의 사는 위치를 나타내는 좌표 값이 주어짐
# 좌표는 x-좌표 값, y-좌표 값의 순서로 빈칸을 사이에 두는 양의 정수

M, N, L = input().split()

M = int(M)
N = int(N)
L = int(L)

m_x_cordinates = [int(m_x) for m_x in input().split()]
n_cordinates = []

resultCount = 0

for _ in range(N):
    n_x, n_y = input().split()
    n_cordinates.append((int(n_x), int(n_y)))

n_cordinates.sort()

for index in range(M):
    n_cordinates_len = len(n_cordinates)
    n_middle_index = int(len(n_cordinates) * 0.5)
    # print("----------")
    # print(f"Debug - n_cordinates: {n_cordinates}")
    # print(f"Debug - n_middle_index: {n_middle_index}")

    current_m_x = m_x_cordinates[index]
    # print(f"Debug - current_m_x: {current_m_x}")

    # 현재 사대의 왼쪽 최대치
    current_m_left_max = max(current_m_x - L, 1)

    # 현재 사대의 오른쪽 최대치
    current_m_right_max = current_m_x + L

    # print(f"1: 현재 x - {current_m_x}, 2: x 왼쪽 끝 - {current_m_left_max}, \
# 3: x 오른쪽 끝 - {current_m_right_max}")

    remove_cordinates = []

    # 동물 리스트의 절반부터 끝까지 증가
    for index in range(n_middle_index + 1, n_cordinates_len):
        # print(f"Debug - index (1): {index}")
        # print(f"Debug - n_cordinates[index] (1): {n_cordinates[index]}")

        # 현재 동물의 x 좌표가 사대 위치 사정거리에서 벗어났다면 반복문 벗어남
        # 동물 좌표를 x 좌표 기준으로 정렬했기 때문에 x 좌표 먼저 확인
        if n_cordinates[index][0] > current_m_right_max:
            break

        # 동물과의 거리 계산 (문제에 제시된 공식 사용)
        animalDistanceFromMe = abs(current_m_x - n_cordinates[index][0]) \
        + n_cordinates[index][1]

        # 현재 동물 좌표가 사대 위치 사정거리 안에 있는지 확인
        if L >= animalDistanceFromMe:
            # 사정 거리보다 동물과의 거리가 작다면 Catch!
            # print(f"Catch at First Loop! {n_cordinates[index][0]}, {n_cordinates[index][1]}")
            resultCount += 1
            remove_cordinates.append(n_cordinates[index])

    for remove_cordinate in remove_cordinates:
        # print(f"Debug - remove_cordinate (1): {remove_cordinate}")
        n_cordinates.remove(remove_cordinate)

    remove_cordinates.clear()

    for index in range(n_middle_index, -1, -1):
        # print(f"Debug - index (2): {index}")
        # print(f"Debug - n_cordinates[index] (2): {n_cordinates[index]}")

        # 현재 동물의 x 좌표가 사대 위치 사정거리에서 벗어났다면 반복문 벗어남
        # 동물 좌표를 x 좌표 기준으로 정렬했기 때문에 x 좌표 먼저 확인
        if current_m_left_max > n_cordinates[index][0]:
            break

        # 동물과의 거리 계산 (문제에 제시된 공식 사용)
        animalDistanceFromMe = abs(current_m_x - n_cordinates[index][0]) \
        + n_cordinates[index][1]

        # 현재 동물 좌표가 사대 위치 사정거리 안에 있는지 확인
        if L >= animalDistanceFromMe:
            # 사정 거리보다 동물과의 거리가 작다면 Catch!
            # print(f"Catch at Second Loop! {n_cordinates[index][0]}, {n_cordinates[index][1]}")
            resultCount += 1
            remove_cordinates.append(n_cordinates[index])

    for remove_cordinate in remove_cordinates:
        # print(f"Debug - remove_cordinate (2): {remove_cordinate}")
        n_cordinates.remove(remove_cordinate)

print(resultCount)