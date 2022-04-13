#pragma once // 헤더의 중복 선언을 방지
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#include <cstring>
#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	// ◆ 2440번 별 찍기 - 3
	int input;
	cin >> input;

	for (int i = 0; i < input; i++) // 세로
	{
		for (int j = input; j > i; j--) // 가로
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}