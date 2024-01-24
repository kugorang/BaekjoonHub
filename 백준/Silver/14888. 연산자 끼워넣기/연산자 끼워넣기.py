# 모범 답안을 많이 참조한 문제이므로 반드시 복습 필요 - Hyeonwoo, 2024.01.24

# 1. 초기 변수 설정: 숫자 리스트와 각 사칙 연산자의 개수를 입력
# 2. DFS 함수 구현: 현재까지의 계산 결과와 사용한 연산자 수를 파라미터로 하는 DFS 함수 구현
# 3. 연산자 별 탐색: 가능한 모든 연산자에 대해 DFS를 수행하며, 각 연산자를 적용한 결과를 다음 단계로 전달
# 4. 최댓값과 최솟값 갱신: 모든 숫자를 사용했을 때의 결과를 최댓값과 최솟값과 비교하여 필요한 경우 갱신
# 5. 결과 반환: 탐색을 마친 후, 계산된 최댓값과 최솟값을 반환

import sys


def dfs(
    current_number_index,
    current_result,
    plus_remain_count,
    minus_remain_count,
    multiply_remain_count,
    division_remain_count,
):
    global minNumber, maxNumber

    if current_number_index == N - 1:
        if minNumber > current_result:
            minNumber = current_result

        if current_result > maxNumber:
            maxNumber = current_result

        return

    # 각 연산자에 대해 DFS 탐색 수행
    if plus_remain_count > 0:  # 덧셈 연산 수행
        dfs(
            current_number_index + 1,
            current_result + numberList[current_number_index + 1],
            plus_remain_count - 1,
            minus_remain_count,
            multiply_remain_count,
            division_remain_count,
        )

    if minus_remain_count > 0:  # 뺄셈 연산 수행
        dfs(
            current_number_index + 1,
            current_result - numberList[current_number_index + 1],
            plus_remain_count,
            minus_remain_count - 1,
            multiply_remain_count,
            division_remain_count,
        )

    if multiply_remain_count > 0:  # 곱셈 연산 수행
        dfs(
            current_number_index + 1,
            current_result * numberList[current_number_index + 1],
            plus_remain_count,
            minus_remain_count,
            multiply_remain_count - 1,
            division_remain_count,
        )

    if division_remain_count > 0:  # 나눗셈 연산 수행
        dfs(
            current_number_index + 1,
            divide(current_result, numberList[current_number_index + 1]),
            plus_remain_count,
            minus_remain_count,
            multiply_remain_count,
            division_remain_count - 1,
        )


# Python에서 `-14 // 3`과 같은 음수에 대한 정수 나눗셈을 수행할 때, 결과는 다음과 같은 과정을 거침
# 1. 나눗셈 수행: 먼저, 일반적인 나눗셈을 수행. `-14 / 3`의 결과는 약 `-4.6667`
# 2. 내림 연산: Python에서 `//` 연산자는 결과를 내림하여 정수로 만듦. 즉, 소수점 이하를 버리는데, 음수에서 내림을 하면 절대값이 더 커짐. `-4.6667`을 내림하면 `-5`가 됨.
# 결과적으로, `-14 // 3`은 `-5`가 됨. 이는 Python의 `//` 연산자가 음수에 대해 내림을 수행하므로 발생하는 결과


# C++14 에서는 나눗셈 결과를 0의 방향으로 반올림. 즉, `-14 / 3`의 결과는 `-4`가 됨.
# 이 차이는 언어마다 정수 나눗셈의 방식이 다르기 때문에 발생.
# 문제를 해결할 때는 이러한 언어별 차이를 고려하여 적절한 계산 방식을 적용.
def divide(a, b):
    result = a // b

    # 1. `a % b != 0`: 'a를 b로 나눴을 때 나머지가 0이 아니면', 즉 나누어 떨어지지 않으면
    # 2. `((a < 0 and b > 0) or (a > 0 and b < 0))`: 'a와 b 중 하나는 음수고 다른 하나는 양수일 때'
    # ex) a가 -3이고 b가 2일 때, 또는 a가 3이고 b가 -2일 때

    # 이 코드는 나눗셈을 할 때, 나누어 떨어지지 않고 나누는 수와 나눠지는 수 중,
    # 하나는 음수고 다른 하나는 양수인 경우를 체크
    # 이런 상황에서는 나눗셈의 결과를 다르게 처리해야 함
    if a % b != 0 and ((a < 0 and b > 0) or (a > 0 and b < 0)):
        result += 1

    return result


# 메인
N = int(sys.stdin.readline())

numberList = list(map(int, sys.stdin.readline().split()))
operatorList = list(map(int, sys.stdin.readline().split()))

minNumber = 1000000000
maxNumber = -1000000000

dfs(
    0, numberList[0], operatorList[0], operatorList[1], operatorList[2], operatorList[3]
)

# 결과 출력
print(maxNumber)
print(minNumber)
