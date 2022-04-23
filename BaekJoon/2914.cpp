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

	// ◆ 2914번 저작권
	float a, i;
	cin >> a >> i;

	cout << a * (i - 1) + 1 << endl;


}