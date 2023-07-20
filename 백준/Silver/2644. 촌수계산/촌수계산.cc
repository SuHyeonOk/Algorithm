#include <iostream>
#include  <vector>

using namespace std;

#define MAX 100

int n{ 0 }, a{ 0 }, b{ 0 }, m{ 0 }, result{ -1 };
vector<vector<int>> vec;
vector<bool> visited;

void DFS(int _node, int _count)
{
	int size = vec[_node].size();
	for (int i = 0; i < size; i++)
	{
		if (false == visited[vec[_node][i]])
		{
			if (b == vec[_node][i])
			{
				result = _count;
				return;
			}

			visited[_node] = true;
			DFS(vec[_node][i], _count + 1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> n >> a >> b >> m;

	vec.resize(n + 1); // 1~ 부터 사용할 것 이기 때문에
	visited.resize(n + 1);

	int x{ 0 }, y{ 0 };
	for (int i = 0; i < m; i++)
	{
		cin >> x >> y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}

	DFS(a, 1);
	cout << result;

	return 0;
}