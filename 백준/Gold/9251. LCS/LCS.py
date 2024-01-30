import sys


def lcs(firstString, secondString):
    firstLen = len(firstString)
    secondLen = len(secondString)

    dp = [[0 for _ in range(secondLen + 1)] for _ in range(firstLen + 1)]

    for i in range(1, firstLen + 1):
        for j in range(1, secondLen + 1):
            if firstString[i - 1] == secondString[j - 1]:
                dp[i][j] = dp[i - 1][j - 1] + 1
            else:
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1])

    return dp[firstLen][secondLen]


firstString = sys.stdin.readline().strip()
secondString = sys.stdin.readline().strip()

print(lcs(firstString, secondString))