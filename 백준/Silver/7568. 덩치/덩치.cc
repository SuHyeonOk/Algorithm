#include<iostream>

using namespace std;

int main()
{
	// 7568번 : 덩치

	int N{ 0 }, iRanking{ 1 };
	cin >> N;

	pair<int, int> arr[50];

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i].first >> arr[i].second;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (arr[i].first < arr[j].first && arr[i].second < arr[j].second)
			{
				iRanking++;
			}
		}

		cout << iRanking << "\n";
		iRanking = 1;
	}

	return 0;
}