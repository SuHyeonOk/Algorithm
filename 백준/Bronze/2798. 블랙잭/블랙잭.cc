#include <iostream>
#include <algorithm>

using namespace std;

int n{ 0 }, m{ 0 }, result{ 0 };
int arrNum[100]{ 0 };
bool	visited[100]{ false };

void	Dfs(int depth, int sum)
{
	if (3 == depth)
	{
		if (m >= sum)
			result = max(result, sum);
		
		return;
	}

	for (size_t i = 0; i < n; i++)
	{
		if (true == visited[i]) return;

		visited[i] = true;
		Dfs(depth + 1, sum + arrNum[i]);
		visited[i] = false;
	}
}

int main()
{
	// 2798

	cin >> n >> m;

	for (int i = 0; i < n; ++i)
		cin >> arrNum[i];

	Dfs(0, 0);

	cout << result << '\n';

	return 0;
}