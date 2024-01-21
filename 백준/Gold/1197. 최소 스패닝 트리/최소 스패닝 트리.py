import sys


class UnionFind:
    # 유니온-파인드 클래스 정의
    def __init__(self, size):
        # 각 노드의 루트를 자기 자신으로 초기화
        self.root = [i for i in range(size + 1)]

    def find(self, x):
        if self.root[x] == x:  # 노드 x의 루트 찾기
            return x

        # 경로 압축(재귀)을 사용하여 효율성을 높임
        self.root[x] = self.find(self.root[x])

        return self.root[x]

    def union(self, x, y):  # 두 노드 x, y의 루트를 찾아 연결
        rootX = self.find(x)
        rootY = self.find(y)

        if rootX != rootY:  # 두 노드 x, y의 루트가 다르면
            self.root[rootY] = rootX  # 서로 다른 노드이므로 두 노드를 연결

        # 이 때, 효율성을 높이기 위해 '랭크(rank)' 또는 '크기(size)' 기반의 최적화를 진행할 수 있음
        # 그러나 많은 코딩테스트 문제는 최적화된 유니온-파인드 알고리즘까지는 요구하지 않음

    def connected(self, x, y):
        # 두 노드가 같은 집합에 속하는지 확인
        # 다른 집합에 속해야지만 사이클이 형성되지 않음
        return self.find(x) == self.find(y)


# 크루스칼 알고리즘 함수 정의
def kruskal(graph, V):
    uf = UnionFind(V)  # 유니온-파인드 객체 초기화
    mst_cost = 0  # MST의 총 가중치

    # 간선을 가중치 기준으로 오름차순 정렬
    graph.sort(key=lambda x: x[2])

    for edge in graph:  # 각 간선에 대해 순회
        u, v, weight = edge

        if not uf.connected(u, v):  # 사이클이 형성되지 않는 경우에만 간선을 추가
            uf.union(u, v)
            mst_cost += weight

    return mst_cost


# V: 정점 수, E: 간선 수
V, E = map(int, sys.stdin.readline().split())

graph = []

# 그래프 예시: 각 간선은 (u, v, weight) 형태로 표현
for _ in range(E):
    graph.append(list(map(int, sys.stdin.readline().split())))

print(kruskal(graph, V))