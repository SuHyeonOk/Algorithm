#pragma once // 헤더 중복 선언 방지
#include <iostream>

using namespace std;

int main()
{
	int iCount;
	cin >> iCount;
	string sNum;
	cin >> sNum;

	int iReault = 0;
	for (int i = 0; i < iCount; i++)
	{
		iReault += sNum[i] - '0';
	}
	cout << iReault << "\n";

	return 0;
}