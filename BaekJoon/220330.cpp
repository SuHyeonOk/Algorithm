#pragma once // ����� �ߺ� ������ ����
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <string>
#define endl '\n'

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	//// �� 10818�� �ּ�, �ִ�
	//int n, input;
	//cin >> n;

	//vector<int> v;
	//int min = INT32_MAX; // �� INT64_MAX�δ� �� �Ǵ� �ɱ��.. �� -1���� �� �ִ� ����..��
	//int max = INT32_MIN;

	//for (int i = 0; i < n; i++)
	//{
	//	cin >> input;
	//	v.push_back(input);
	//	if (v[i] < min)
	//		min = v[i];
	//	if (v[i] > max)
	//		max = v[i];
	//}
	//std::cout << min << " " << max << endl;

	//// �� 1110�� ���ϱ� ����Ŭ 
	//int input;
	//cin >> input;

	//int result = input; 
	//int sum = 0; // ���ϱ� ���
	//int count = 0; // N��°

	//while (true)
	//{
	//	int a = result / 10;
	//	int b = result % 10;

	//	sum = a + b;

	//	result = (b * 10) + (sum % 10);
	//	count++;

	//	if (result == input)
	//		break;
	//}
	//std::cout << count;

	//// �� 10952�� A+B - 4
	//int a, b;
	//while (cin >> a >> b)
	//{
	//	cout << a + b << "\n";
	//}

	//// �� 10952�� A+B - 5
	//while (true)
	//{
	//	int a, b;
	//	cin >> a >> b;

	//	if (a == 0 && b == 0)
	//		break;

	//	cout << a + b << endl;
	//}

	//// �� 1546�� ���
	///*
	// ���� ��� = (((���� ����1 / �ִ� ��) + ... + (���� ���� N / �ִ� ��)) / N ) * 100
	//		 = (((���� ����1  + ... + ���� ���� N) / �ִ� ��) / N ) * 100
	//*/
	//int n;
	//cin >> n;

	//int m = 0; //  �ִ� ����
	//double result = 0;

	//double s;
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> s;
	//	result += s;

	//	if (m < s) // ���� ���� �ִ񰪺��� ũ�ٸ� �Է¹��� ������ ����
	//		m = s;
	//}

	//cout << ((result / m) / n) * 100;
	return 0;
}