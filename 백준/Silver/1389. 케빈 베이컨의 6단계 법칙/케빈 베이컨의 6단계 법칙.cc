#include <iostream>
#include <array>
#include <vector>
#include <algorithm>

using namespace std;

#define MAX 100

int N{ 0 }, M{ 0 }, person{ MAX }, ans{ 987654321 };
array<int, 101> arr{ 0 };
vector<vector<int>> vec{ 0 };

void DFS(int dis, int friendnum) // dis : 지정된 친구로부터의 거리차이, friendnum : 친구 번호
{
	if (arr[friendnum] != 0)
	{
		// 호출된 친구와의 거리랑 최솟값으로 저장되어 있는 수와 비교해 더 작은 수로 갱신
		arr[friendnum] = min(dis, arr[friendnum]);
	}
	else
	{
		arr[friendnum] = dis;
	}

	int size = vec[friendnum].size();
	for (int i = 0; i < size; i++)
	{
		int next = vec[friendnum][i];
		if (arr[next] == 0 || arr[next] > dis + 1)
		{
			DFS(dis + 1, next);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> N >> M;

	vec.resize(N + 1);
	int friend1{ 0 }, friend2{ 0 };
	for (int i = 0; i < M; i++)
	{
		cin >> friend1 >> friend2;
		vec[friend1].push_back(friend2);
		vec[friend2].push_back(friend1);
	}

	for (int i = 1; i <= N; i++)
	{
		fill(arr.begin(), arr.end(), 0);

		int size = vec[i].size();
		for (int j = 0; j < size; j++)
		{
			DFS(1, vec[i][j]);
		}

		int temp{ 0 };
		for (int j = 1; j <= N; j++)
		{
			if (j == i) continue;
			temp += arr[j];
		}
		  
		if (ans > temp)
		{
			ans = temp;
			person = i;
		}
		else if (ans == temp)
		{
			person = min(person, i);
		}
	}

	cout << person;

	return 0;
}