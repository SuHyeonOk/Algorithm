#pragma once // ����� �ߺ� ������ ����
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

	// �� 2441�� �� ��� - 4
	int input;
	cin >> input;

	for (int i = 0; i < input; i++) // ����
	{
		for (int j = 0; j < i; j++) // ����
		{
			cout << " ";
		}
		for (int j = input; j > i; j--) // ����
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}