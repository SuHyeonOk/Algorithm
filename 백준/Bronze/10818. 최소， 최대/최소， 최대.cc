#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int iCount{ 0 };
	cin >> iCount;

	vector<int> vecNum;

	for (int i = 0; i < iCount; i++)
	{
		int iNum{ 0 };
		cin >> iNum;

		vecNum.push_back(iNum);
	}

	vector<int>::iterator iMinIter = min_element(vecNum.begin(), vecNum.end());
	vector<int>::iterator iMaxIter = max_element(vecNum.begin(), vecNum.end());
	
	int iMin = static_cast<int>(*iMinIter);
	int iMax = static_cast<int>(*iMaxIter);

	cout << iMin << " " << iMax << '\n';

	return 0;
}