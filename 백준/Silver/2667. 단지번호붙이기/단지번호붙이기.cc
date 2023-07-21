#include <iostream>
#include  <vector>
#include <algorithm>
#include <array>

using namespace std;

#define FOUR 4

int N{ 0 }, Cycle{ 0 }, Count{ 0 };
vector<vector<int>> vec;
vector<int> result;

array<int, FOUR> dx = { 0, 0, -1, 1 };
array<int, FOUR> dy = { -1, 1, 0, 0 };

void DFS(int _x, int _y)
{
	for (int i = 0; i < FOUR; i++)
	{
		int x = _x + dx[i];
		int y = _y + dy[i];

		if (x >= N || x < 0 || y >= N || y < 0)
		{
			// 지도를 벗어나는 경우
			continue;
		}

		if (vec[x][y] == 0)
		{
			// 갈 수 없는 땅인 경우
			continue;
		}

		if (vec[x][y] == 1)
		{
			// 갈 수 있는 땅이면서 && 처음 방문한 경우
			vec[x][y] = -1;
			Count++;
			DFS(x, y);
		}
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N;

	vec.resize(N, vector<int>(N));

	// 입력
	char chr;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> chr;
			vec[i][j] = chr - '0';
		}
	}

	// 함수 실행
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (1 == vec[i][j])
			{
				vec[i][j] = -1; 
				Count = 1;	// 윗줄에서 -1 만들어 주니까 Count 1부터 시작
				Cycle++;
				DFS(i, j);
				result.push_back(Count);
			}
		}
	}

	// 결과 출력
	cout << Cycle << '\n';
	
	sort(result.begin(), result.end());
	size_t size = result.size();
	for (size_t i = 0; i < size; i++)
	{
		cout << result[i] << endl;
	}

	return 0;
} 