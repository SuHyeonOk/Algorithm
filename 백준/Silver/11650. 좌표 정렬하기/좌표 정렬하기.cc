#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool NumSorting(const pair<int, int> myPair1, const pair<int, int> myPair2)
{
	if (myPair1.first == myPair2.first)
	{
		return myPair1.second < myPair2.second;
	}

	return myPair1.first < myPair2.first;
}

int main()
{
	/*
	11650번 : 좌표 정렬하기
	첫째 줄 : 점 개수 (1 <= N <= 100,000)
	둘째 줄 : x, y (-100,000 <= x,y <= 100,000) 항상 정수이고, 위치가 같은 두점은 없다.
	*/

	int iNum{ 0 };
	vector<pair<int, int>> vec;

	cin >> iNum;
	vec.reserve(iNum);

	for (int i = 0; i < iNum; i++)
	{
		pair<int, int> myPair;
		cin >> myPair.first >> myPair.second;
		vec.push_back(myPair);
	}

	sort(vec.begin(), vec.end(), NumSorting);

	size_t iSize = vec.size();
	for (size_t i = 0; i < iSize; i++)
	{
		cout << vec[i].first << " " << vec[i].second << '\n';
	}

	return 0;
}