import sys

T = int(sys.stdin.readline())

for _ in range(T):
    applyPeopleNum = int(sys.stdin.readline())
    appliers = []

    for _ in range(applyPeopleNum):
        documentRank, interviewRank = map(int, sys.stdin.readline().split())
        appliers.append((documentRank, interviewRank))

    # 서류 심사 순위로 정렬
    appliers.sort()

    # 채용할 수 있는 최대 인원 수
    maxHire = 1  # 서류 심사 1위는 무조건 선발
    bestInterviewRank = appliers[0][1]  # 서류 심사 1위의 면접 순위
        
    for i in range(1, applyPeopleNum):
        if bestInterviewRank > appliers[i][1]:
            maxHire += 1
            bestInterviewRank = appliers[i][1]
    
    print(maxHire)