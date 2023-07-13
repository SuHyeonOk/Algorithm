#include <iostream>
#include <array>
#include <vector>

using namespace std;

#define MAX 100

int N{ 0 }, M{ 0 }, Count{ 0 };
vector<vector<int>> vec{ {0} };
vector<bool> visited{ false };

int AllVisited()
{
	// visited 벡터를 순회하면서 
	// 하나라도 false 가 있다면 해당 index 를 반환하고,
	// 벡터 전체가 false 라면 -1 을 반환한다.
	
	for (int i = 1; i <= N; i++)
	{
		if (false == visited[i])
		{
			return i;
		}
	}

	return -1;
}

void DFS(int node)
{
	visited[node] = true;

	int size = vec[node].size();
	for (int i = 0; i < size; i++)
	{
		int next = vec[node][i];
		if (false == visited[next])
		{
			DFS(next);
		}
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	cin >> N >> M;
	vec.resize(N + 1, { {0} });
	visited.resize(N + 1, false);

	int num0{ 0 }, num1{ 0 };
	for (int i = 0; i < M; i++)
	{
		cin >> num0 >> num1;
		vec[num0].push_back(num1);
		vec[num1].push_back(num0);
	}

	while (AllVisited() != -1)
	{
		DFS(AllVisited());
		Count++;
	}

	cout << Count;

	return 0;
}