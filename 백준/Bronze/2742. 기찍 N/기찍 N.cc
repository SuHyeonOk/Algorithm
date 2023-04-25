#pragma once // 헤더의 중복 선언을 방지
#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = n; i >= 1; i--)
	{
		cout << i << "\n";
	}

	return 0;
}