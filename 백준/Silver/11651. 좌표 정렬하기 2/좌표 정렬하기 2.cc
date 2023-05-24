#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int iNum{ 0 };
	vector<pair<int, int>> vec;

	cin >> iNum;
	vec.reserve(iNum);

	for (int i = 0; i < iNum; i++)
	{
		pair<int, int> myPair;
		cin >> myPair.second >> myPair.first;
		vec.push_back(myPair);
	}

	sort(vec.begin(), vec.end());

	size_t iSize = vec.size();
	for (size_t i = 0; i < iSize; i++)
	{
		cout << vec[i].second << " " << vec[i].first << '\n';
	}

	return 0;
}