# ----------

# 1. 문제 정의: N개의 디스크가 있고, 이들을 시작 기둥에서 목표 기둥으로 옮겨야 함
# 이 과정에서 한 번에 하나의 디스크만 옮길 수 있으며, 작은 디스크 위에 큰 디스크가 오도록 해야 함

# 2. 재귀 함수 정의: 하노이의 탑 문제를 해결하기 위한 함수 hanoi를 정의
# 이 함수는 디스크의 수, 시작 기둥, 목표 기둥, 보조 기둥을 인자로 받음

# 3. 기본 사례 처리: 가장 작은 하위 문제(기본 사례)는 하나의 디스크를 다른 기둥으로 옮기는 것입
# 이 경우는 단순히 해당 디스크를 목표 기둥으로 옮기면 됨

# 4. 재귀적 접근:
#   N-1 개의 디스크를 시작 기둥에서 보조 기둥으로 재귀적으로 이동. 이때 목표 기둥을 보조 기둥으로 사용.
#   가장 큰 디스크(N 번째 디스크)를 시작 기둥에서 목표 기둥으로 옮김.
#   N-1 개의 디스크를 보조 기둥에서 목표 기둥으로 재귀적으로 이동. 이때 시작 기둥을 보조 기둥으로 사용.

# 5. 재귀 호출: 각 단계에서 hanoi 함수를 재귀적으로 호출하여, 작은 문제들을 해결.

# 6. 출력: 각 이동 단계마다 수행된 디스크 이동 출력.

# ----------

# n: 옮길 디스크의 수
# from: 시작 원반
# to: 목표 원반
# aux: 보조 원반

# def hanoi(n, from, to, aux):
#     만약 n == 1 이라면:
#         출력 "from 원반에서 to 원반으로 디스크 1 이동"
#         반환
#     move(n-1, from, aux, to)
#     출력 "from 원반에서 to 원반으로 디스크 n 이동"
#     move(n-1, aux, to, from)

# -----------
# 2. 재귀 함수 정의
# n: 옮길 디스크의 수 / from: 시작 원반 / to: 목표 원반 / aux: 보조 원반
def hanoiExceeds20(n):
    return 2 ** n - 1

def hanoi20orLess(n, start, end, sub, printMode = False):
    totalCount = 0

    # 3. 기본 사례 처리
    if n <= 1:
        totalCount += 1

        if printMode:
            print(start, end)

        return totalCount

    # 4. 재귀적 접근, 5. 재귀 호출
    totalCount += hanoi20orLess(n - 1, start, sub, end, printMode)

    # 6. 출력
    if printMode:
        print(start, end)

    totalCount += 1

    totalCount += hanoi20orLess(n - 1, sub, end, start, printMode)

    return totalCount

# 1. 문제 정의
N = int(input())

if N > 20:
    print(hanoiExceeds20(N))
else:
    print(hanoi20orLess(N, 1, 3, 2))
    hanoi20orLess(N, 1, 3, 2, True)