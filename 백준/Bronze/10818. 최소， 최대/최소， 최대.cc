#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int iCount{ 0 };
	cin >> iCount;

	int iMin{ 1000000 };
	int iMax{ -1000000 };

	for (int i = 0; i < iCount; i++)
	{
		int iNum{ 0 };
		cin >> iNum;

		if (iMin > iNum)
		{
			iMin = iNum;
		}
		if (iMax < iNum)
		{
			iMax = iNum;
		}
	}

	cout << iMin << " " << iMax << '\n';

	return 0;
}