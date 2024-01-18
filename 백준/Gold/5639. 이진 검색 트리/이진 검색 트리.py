import sys

sys.setrecursionlimit(10**6)

def dfs(binarySearchTree):
    if len(binarySearchTree) <= 0:
        return

    if len(binarySearchTree) <= 1:
        print(binarySearchTree[0])
        return
    
    root = binarySearchTree[0]
    left = []
    right = []

    for num in binarySearchTree[1:]:
        if num < root:
            left.append(num)
        else:
            right.append(num)

    dfs(left)
    dfs(right)

    print(root)

binarySearchTree = []

while True:
    try:
        binarySearchTree.append(int(sys.stdin.readline()))
    except:
        break

dfs(binarySearchTree)