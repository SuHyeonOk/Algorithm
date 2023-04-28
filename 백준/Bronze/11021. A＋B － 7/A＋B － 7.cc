#pragma once // 헤더의 중복 선언을 방지
#include <iostream>

using namespace std;
#define endl '\n'

int main()
{
	// ◆ 11021번 A+B - 7
	int t;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		int a, b;
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << endl;
	}
}