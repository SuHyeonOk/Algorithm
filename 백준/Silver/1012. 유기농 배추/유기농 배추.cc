#include <iostream>
#include <vector>
#include <algorithm>
#include <array>

using namespace std;

#define MAX 50
#define FOUR 4

int T{ 0 }, M{ 0 }, N{ 0 }, K{ 0 };
//vector<vector<int>> vec;
//vector<vector<int>> visited;
array < array<int, MAX>, MAX> arr{ {0} };
array < array<int, MAX>, MAX> visited{ {0} };

void DFS(int y, int x)
{
	array<int, FOUR> dy{ 1, -1, 0, 0 }; // y축 기준 상, 하, 좌, 우
	array<int, FOUR> dx{ 0, 0, 1, -1 }; // x축 기준 상, 하, 좌, 우

	for (int i = 0; i < FOUR; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || ny >= N || nx < 0 || nx >= M)
		{
			// 배열의 인덱스를 넘지 않도록
			continue;
		}

		if (arr[ny][nx] && !visited[ny][nx])
		{
			visited[ny][nx]++;
			DFS(ny, nx);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> T;

	while (T--)
	{
		cin >> M >> N >> K;

		//vec.resize(N + 1, vector<int>(M + 1, 0));
		//visited.resize(N + 1, vector<int>(M + 1, 0));

		arr = { {0} };
		visited = { {0} };

		int x{ 0 }, y{ 0 };
		for (int i = 0; i < K; i++)
		{
			cin >> x >> y;
			arr[y][x] = 1;
		}

		int result{ 0 };
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < M; j++)
			{
				if (arr[i][j] != 0 && visited[i][j] == 0)
				{
					result++;
					visited[i][j]++;
					DFS(i, j);
				}
			}
		}

		cout << result << '\n';

	}

	return 0;
}