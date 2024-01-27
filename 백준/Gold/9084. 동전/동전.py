import sys

# T: 테스트 케이스의 개수
T = int(sys.stdin.readline())

for _ in range(T):
    # N: 동전 종류 개수
    N = int(sys.stdin.readline())

    # N가지 동전의 각 금액이 오름차순으로 정렬
    # ex) 1, 2 입력 시 index 0: 1원, index 1: 2원
    coinType = list(map(int, sys.stdin.readline().split()))

    # M: N개의 동전 종류로 만들어야 할 총 금액
    M = int(sys.stdin.readline())


    # dp 배열: 각 동전과 각 금액에 대한 방법의 수 저장
    # ex) dp[coin][currentPrice] : 금액 'currentPrice'를 만드는 데 필요한 동전 'coin'까지 고려한 방법의 수
    dp = [([0] * (M + 1)) for _ in range(N + 1)]

    # dp[0][eachPrice]는 이미 dp 초기화 단계에서 0으로 설정됐기 때문에 1부터 반복 시작
    for coinIndex in range(1, N + 1):  # 동전 종류로 행을 설정
        # 어떤 동전 종류 개수를 선택하든 금액이 0일 때의 경우의 수는 1로 초기화해야 함
        dp[coinIndex][0] = 1

        for eachPrice in range(1, M + 1):
            # 해당 동전 종류를 포함시킬 때 열에 해당하는 가격을 만들 수 있는 방법이 있다면 count 증가
            dp[coinIndex][eachPrice] += dp[coinIndex - 1][eachPrice]

            if eachPrice >= coinType[coinIndex - 1]:
                dp[coinIndex][eachPrice] += dp[coinIndex][
                    eachPrice - coinType[coinIndex - 1]
                ]

    print(dp[N][M])