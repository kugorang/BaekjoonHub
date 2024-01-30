import sys
import statistics

C = int(sys.stdin.readline())

for _ in range(C):
    studentsInfo = list(map(int, sys.stdin.readline().split()))
    studentsCount = studentsInfo[0]
    studentsScores = studentsInfo[1:]
    scoreAverage = statistics.mean(studentsScores)
    
    goodJobStudentCount = 0
    
    for currentScore in studentsScores:
        if currentScore > scoreAverage:
            goodJobStudentCount += 1
            
    print(f"{(goodJobStudentCount / len(studentsScores) * 100):.3f}%")