import sys

N = int(sys.stdin.readline())

for i in range(N):
    str = ""

    for j in range(i + 1):
        str = f"{str}*"
        
    print(str)