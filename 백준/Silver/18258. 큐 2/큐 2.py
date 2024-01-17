import sys
from collections import deque

class Queue:
    def __init__(self):
        self.data = deque()
        return
    
    def push(self, X):
        self.data.append(X)
        return
    
    def pop(self):
        if self.empty():
            return -1

        return self.data.popleft()

    def size(self):
        return len(self.data)

    def empty(self):
        if self.size() <= 0:
            return 1

        return 0

    def front(self):
        if self.empty():
            return -1

        return self.data[0]

    def back(self):
        if self.empty():
            return -1
        
        return self.data[self.size() - 1]

N = int(sys.stdin.readline())

queue = Queue()
commandList = []

for _ in range(N):
    commandList.append(sys.stdin.readline().split())

for index in range(N):
    command = commandList[index][0]

    if command == "push":
        queue.push(commandList[index][1])
    elif command == "pop":
        print(queue.pop())
    elif command == "size":
        print(queue.size())
    elif command == "empty":
        print(queue.empty())
    elif command == "front":
        print(queue.front())
    elif command == "back":
        print(queue.back())