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

	// ◆ 2442번 별 찍기 - 9
	// 마지막 줄? 이 겹치면 안 되었다 그래서 애초에 for문에서 한 줄이 실행 안 하도록 하는 것이 핵심!
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		for (int j = n; j > i; j--)
		{
			cout << "*";
		}
		for (int j = n - 1; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	for (int i = 2; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < i - 1; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}