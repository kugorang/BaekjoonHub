N = int(input())

# dictionary
binaryTree = {}
resultString = ""

for _ in range(N):
    node = input().split()
    binaryTree[node[0]] = node[1:]

# 트리 순회를 DFS 방식으로 구현
def dfs(character, mode):
    global resultString

    if character == '.':
        return

    if mode == "preorder":
        resultString = f"{resultString}{character}"

    dfs(binaryTree[character][0], mode)

    if mode == "inorder":
        resultString = f"{resultString}{character}"

    dfs(binaryTree[character][1], mode)

    if mode == "postorder":
        resultString = f"{resultString}{character}"

dfs('A', "preorder")
print(resultString)
resultString = ""

dfs('A', "inorder")
print(resultString)
resultString = ""

dfs('A', "postorder")
print(resultString)
resultString = ""