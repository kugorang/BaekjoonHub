# 정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램 작성

# 명령은 총 다섯 가지

# push X: 정수 X를 스택에 넣는 연산
# pop: 스택에서 가장 위에 있는 정수를 빼고, 그 수를 출력. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력
# size: 스택에 들어있는 정수의 개수를 출력
# empty: 스택이 비어있으면 1, 아니면 0을 출력
# top: 스택의 가장 위에 있는 정수를 출력. 만약 스택에 들어있는 정수가 없는 경우에는 -1을 출력

# ----------

# 첫째 줄에 주어지는 명령의 수 N (1 ≤ N ≤ 10,000)이 주어짐
# 둘째 줄부터 N개의 줄에는 명령이 하나씩 주어짐
# 주어지는 정수는 1보다 크거나 같고, 100,000보다 작거나 같음
# 문제에 나와있지 않은 명령이 주어지는 경우는 없음

# ----------

# 파이썬의 클래스에서 함수를 정의할 때 첫 번째 인자가 클래스의 인스턴스를 나타내야 함
# self 대신 다른 이름을 사용해도 되나, 관례적으로 self 사용
class Stack:
    def __init__(self):
        self.data = []

    def push(self, X):
        self.data.append(X)
        return

    def pop(self):
        if self.size() <= 0:
            return -1

        return self.data.pop()

    def size(self):
        return len(self.data)

    @property
    def empty(self):
        if self.size() <= 0:
            return 1
        
        return 0

    def top(self):
        dataSize = self.size()

        if dataSize <= 0:
            return -1

        return self.data[dataSize - 1]
    

N = int(input())

stack = Stack()
oommands = []

for _ in range(N):
    command = input().split()
    oommands.append(command)

for command in oommands:
    if command[0] == "push":
        stack.push(int(command[1]))
    elif command[0] == "pop":
        print(stack.pop())
    elif command[0] == "size":
        print(stack.size())
    elif command[0] == "empty":
        print(stack.empty)
    elif command[0] == "top":
        print(stack.top())