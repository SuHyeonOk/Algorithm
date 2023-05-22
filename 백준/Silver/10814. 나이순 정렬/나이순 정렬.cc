#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool AgeSorting(const pair<int, string> iAge1, const pair<int, string> iAge2)
{
	return iAge1.first < iAge2.first;
}

int main()
{
	// 10814번 : 나이순 정렬

	int N{ 0 };
	vector<pair<int, string>> vec;

	cin >> N;
	vec.reserve(N);

	for (int i = 0; i < N; i++)
	{
		pair<int, string> pair;
		cin >> pair.first >> pair.second;
		vec.push_back(pair);
	}

	stable_sort(vec.begin(), vec.end(), AgeSorting);

	size_t iSize = vec.size();
	for (size_t i = 0; i < iSize; i++)
	{
		cout << vec[i].first << " " << vec[i].second << "\n";
	}

	return 0;
}