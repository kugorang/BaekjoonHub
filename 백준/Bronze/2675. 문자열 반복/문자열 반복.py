T = int(input())

for i in range(0, T):
    R, S = input().split()
    R = int(R)
    sLen = len(S)
    
    currentResult = []
    
    for j in range(0, sLen):
        for k in range(0, R):
            currentResult.append(S[j])
            
    print(''.join(currentResult))