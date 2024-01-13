examScore = int(input())
grade = ''

if (examScore >= 90):
    grade = 'A'
elif (examScore >= 80):
    grade = 'B'
elif (examScore >= 70):
    grade = 'C'
elif (examScore >= 60):
    grade = 'D'
else:
    grade = 'F'
    
print(grade)