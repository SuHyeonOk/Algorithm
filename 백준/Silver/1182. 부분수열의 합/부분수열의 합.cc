#include <iostream>
#include <algorithm>

using namespace std;

int n{ 0 }, s{ 0 }, iCount{ 0 };
int arrNum[20]{ 0 };

void	Dfs(int depth, int sum)
{
	if (n == depth)
		return;

	if (s == sum + arrNum[depth])
	{
		++iCount;
	}

	Dfs(depth + 1, sum);
	Dfs(depth + 1, sum + arrNum[depth]);
}

int main()
{
	// 1182
	// n : 1~20 / s : ~100000

	cin >> n >> s;

	for (int i = 0; i < n; ++i)
		cin >> arrNum[i];

	Dfs(0, 0);

	cout << iCount << '\n';

	return 0;
}