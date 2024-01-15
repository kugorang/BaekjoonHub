# 골드바흐의 추측은 유명한 정수론의 미해결 문제
# 2보다 큰 모든 짝수는 두 소수의 합으로 나타낼 수 있고, 이를 골드바흐 수라고 함
# 또, 짝수를 두 소수의 합으로 나타내는 표현을 그 수의 골드바흐 파티션이라고 함

# ex) 4 = 2 + 2, 6 = 3 + 3, 8 = 3 + 5, 10 = 5 + 5, 12 = 5 + 7, 14 = 3 + 11, 14 = 7 + 7이다.
# 10000보다 작거나 같은 모든 짝수 n에 대한 골드바흐 파티션은 존재한다.

# 2보다 큰 짝수 n이 주어졌을 때, n의 골드바흐 파티션을 출력하는 프로그램을 작성
# 만약 가능한 n의 골드바흐 파티션이 여러 가지인 경우에는 두 소수의 차이가 가장 작은 것을 출력

import math

def IsPrimeNumber(n):
    if n <= 1:
        return False

    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            return False

    return True

T = int(input())

for i in range(0, T):
    n = int(input())

    for currentNumber in range(int(n * 0.5), 1, -1):
        if IsPrimeNumber(currentNumber) and IsPrimeNumber(n - currentNumber):
            print(currentNumber, n - currentNumber)
            break