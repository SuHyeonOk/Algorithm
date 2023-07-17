#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#define endl '\n'

int main()
{
	// ◆ 2741번 N찍기
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << i << endl;
	}
}