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

	// �� 2444�� �� ��� - 7
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = n - 1; j > i; j--)
		{
			cout << " ";
		}
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

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

	// �� 2443�� �� ��� - 6
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


}