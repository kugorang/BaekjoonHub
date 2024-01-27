import sys

N = int(sys.stdin.readline())

tileCount = [0] * (N + 1)

tileCount[0] = 1
tileCount[1] = 1

for index in range(2, N + 1) :
    tileCount[index] = (tileCount[index - 1] + tileCount[index - 2]) % 15746

print(tileCount[N])