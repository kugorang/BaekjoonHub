# MS Copilot에게 물어본 모범 답안. 반드시 다시 풀어볼 것. - Hyeonwoo, 2024.01.30
import sys

N = int(sys.stdin.readline())
meetings = []

for _ in range(N):
    startTime, endTime = map(int, sys.stdin.readline().split())
    meetings.append((startTime, endTime))

# 끝나는 시간을 기준으로 정렬
meetings.sort(key=lambda x: (x[1], x[0]))

lastEndTime = 0
meetingCount = 0

for meeting in meetings:
    if meeting[0] >= lastEndTime:
        lastEndTime = meeting[1]
        meetingCount += 1

print(meetingCount)