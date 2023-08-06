#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#define endl '\n'

int main()
{
	int vInput;
	int result = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> vInput;
		result += vInput * vInput;
	}

	cout << result % 10 << endl;

	return 0;
}