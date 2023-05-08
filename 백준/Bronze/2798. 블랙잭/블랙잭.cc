#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n{ 0 }, m{ 0 }, result{ 0 };
bool	visited[100]{ false };
vector<int> vec;

void	Dfs(int num, int sum)
{
	if (3 == num)
	{
		if (m >= sum)
			result = max(result, sum);

		return;
	}

	for (size_t i = 0; i < n; i++)
	{
		if (false != visited[i]) return;

		visited[i] = true;
		Dfs(num + 1, sum + vec[i]);
		visited[i] = false;
	}
}

int main()
{
	// 2798
	// n : 3~100 m : 10~300000

	cin >> n >> m;

	for (size_t i = 0; i < n; i++)
	{
		int Num{ 0 };
		cin >> Num;
		vec.push_back(Num);
	}

	Dfs(0, 0);

	cout << result << '\n';

	return 0;
}