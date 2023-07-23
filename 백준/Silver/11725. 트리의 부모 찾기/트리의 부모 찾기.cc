#include <iostream>
#include <vector>
#include <list>
#include <queue>

using namespace std;

int g_iN;

list<int> Tree[100001];
bool Visited[100001] = { false };
int DP[100001] = { 0 };

int BFS()
{
	queue<pair<int, int>> Qs;
	Qs.push({1, 1});

	Visited[1] = true;

	while (!Qs.empty())
	{
		pair<int, int> iCurNum = Qs.front();
		Qs.pop();

		DP[iCurNum.second] = iCurNum.first;

		for (int i = 0; i < Tree[iCurNum.second].size(); ++i)
		{
			for (auto iNexNum : Tree[iCurNum.second])
			{
				if (Visited[iNexNum] == false)
				{
					Visited[iNexNum] = true;
					Qs.push({ iCurNum.second, iNexNum });
				}
			}
		}
	}

	return -1;

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> g_iN;

	for (int i = 0; i < g_iN - 1; ++i)
	{
		int iA, iB;
		cin >> iA >> iB;
		Tree[iA].push_back(iB);
		Tree[iB].push_back(iA);
	}

	BFS();

	for (int i = 2; i <= g_iN; ++i)
		cout << DP[i] << '\n';

	return 0;
}