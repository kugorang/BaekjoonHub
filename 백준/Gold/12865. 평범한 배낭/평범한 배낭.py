import sys


def knapsack(dp):
    global N, K

    for row in range(1, N + 1):
        # W: 각 물건의 무게, V: 해당 물건의 가치
        W, V = map(int, sys.stdin.readline().split())

        for col in range(1, K + 1):
            if W <= col:
                # 현재 물건을 배낭에 넣을 수 있는 경우
                # 물건을 넣는 경우와 넣지 않는 경우 중 더 큰 가치를 선택
                dp[row][col] = max(dp[row - 1][col], dp[row - 1][col - W] + V)
            else:
                # 현재 물건을 배낭에 넣을 수 없는 경우
                # 이전 물건까지의 가치를 유지
                dp[row][col] = dp[row - 1][col]

    return dp[N][K]


# N: 물품의 수, K: 무게
N, K = map(int, sys.stdin.readline().split())
dp = [[0] * (K + 1) for _ in range(N + 1)]

print(knapsack(dp))