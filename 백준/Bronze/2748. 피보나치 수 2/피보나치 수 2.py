import sys

n = int(sys.stdin.readline())
fibo = [ int(0), int(1) ]

for i in range(2, n + 1):
    fibo.append(int(fibo[i - 2] + fibo[i - 1]))

print(fibo[n])