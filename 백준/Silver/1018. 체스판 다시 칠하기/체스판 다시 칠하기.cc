#include<iostream>
#include<algorithm>

using namespace std;

int chess[51][51]{ -1, -1 }; // black '0' white '1'

int check(int x, int y)
{
	int white{ 0 }, black{ 0 };

	for (int i = x; i < x + 8; i++)
	{
		for (int j = y; j < y + 8; j++)
		{
			if ((i + j) % 2 == chess[i][j]) white++;
			if ((i + j + 1) % 2 == chess[i][j]) black++;
		}
	}

	return min(white, black);
}

int main()
{
	int m{ 0 }, n{ 0 }, mini{ 2500 };
	cin >> n >> m;

	char c;
	for (int i = 0; i < n; i++)  
	{
		for (int j = 0; j < m; j++)
		{
			cin >> c;
			if (c == 'B')	chess[i][j] = 0;	// 검정색 '0' 로 저장
			else				chess[i][j] = 1;	// 흰색 '1' 로 저장
		}
	}

	for (int i = 0; i <= n - 8; i++)
	{
		for (int j = 0; j <= m - 8; j++)
		{
			if (mini > check(i, j)) mini = check(i, j);
		}
	}

	cout << mini << "\n";

	return 0;
}