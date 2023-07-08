#include <iostream>
#include <algorithm>

using namespace std;

#define MAX 1001

int arr[MAX]{ 0 };
bool visited[MAX]{ false };

void DFS(int node)
{
	visited[node] = true;

	int next = arr[node];
	if (visited[next] != true)
	{
		DFS(next);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int T{ 0 }, N{ 0 }, cycle{ 0 };
	cin >> T;

	int iNum{ 0 };
	while (T--)
	{
		cin >> N;

		fill(visited, visited + MAX, 0);
		fill(arr, arr + MAX, 0);
		cycle = 0;

		for (int i = 1; i <= N; i++)
		{
			cin >> arr[i];
		}

		for (int i = 1; i <= N; i++)
		{
			if (false == visited[i])
			{
				DFS(i);
				cycle++;
			}
		}

		cout << cycle << '\n';
	}

	return 0;
}