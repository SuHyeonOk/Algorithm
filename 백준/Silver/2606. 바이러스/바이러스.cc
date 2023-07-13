#include <iostream>
#include <array>
#include <vector>

using namespace std;

#define MAX 100

int Compiter{ 0 }, Link{ 0 }, Result{ 0 };
vector<vector<int>> vec{ 0 };
array<bool, MAX> visited{ false };

void DFS(int node)
{
	if (visited[node] == false)
	{
		visited[node] = true;
		Result++;
	}
	else
	{
		return;
	}

	int size = vec[node].size();
	for (int i = 0; i < size; i++)
	{
		DFS(vec[node][i]);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	cin >> Compiter >> Link;
	vec.resize(Compiter + 1); // 1~부터 Compiter 까지 사용하기 때문에 "+1"
	
	int Com1{ 0 }, Com2{ 0 };
	for (int i = 0; i < Link; i++)
	{
		cin >> Com1 >> Com2;
		vec[Com1].push_back(Com2);
		vec[Com2].push_back(Com1);
	}

	DFS(1);

	cout << Result - 1;

	return 0;
}