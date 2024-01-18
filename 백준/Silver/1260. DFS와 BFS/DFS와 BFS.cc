#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

using namespace std;

void dfs(deque<deque<int>> &nodeValues, vector<bool> &visited, deque<int> graphTool, int V)
{
	graphTool.push_front(V);

	while (!graphTool.empty())
	{
		V = graphTool.front();
		graphTool.pop_front();

		if (visited[V])
		{
			continue;
		}

		cout << V << " ";
		visited[V] = true;

		for (int index : nodeValues[V])
		{
			graphTool.push_front(index);
		}
	}
}

void bfs(deque<deque<int>>& nodeValues, vector<bool>& visited, deque<int> graphTool, int V)
{
	graphTool.push_back(V);

	while (!graphTool.empty())
	{
		V = graphTool.front();
		graphTool.pop_front();

		if (visited[V])
		{
			continue;
		}

		cout << V << " ";
		visited[V] = true;

		for (int index : nodeValues[V])
		{
			graphTool.push_back(index);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, V;

	cin >> N >> M >> V;

	deque<deque<int>> nodeValues(N + 2);
	vector<bool> visited(N + 2);

	deque<int> graphTool;	// DFS, BFS가 그래프 이론으로 분류된다고 함

	for (int i = 0; i < M; i++)
	{
		int firstNode, secondNode;

		cin >> firstNode >> secondNode;

		nodeValues[firstNode].push_back(secondNode);
		nodeValues[secondNode].push_back(firstNode);
	}

	for (int i = 0; i <= N; i++)
	{
		sort(nodeValues[i].begin(), nodeValues[i].end(), greater<>());
	}

	dfs(nodeValues, visited, graphTool, V);

	cout << endl;

	for (int i = 0; i <= N; i++)
	{
		visited[i] = false;
	}

	for (int i = 0; i <= N; i++)
	{
		reverse(nodeValues[i].begin(), nodeValues[i].end());
	}

	bfs(nodeValues, visited, graphTool, V);

	return 0;
}