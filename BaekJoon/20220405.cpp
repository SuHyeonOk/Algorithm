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
	std::cin.tie(NULL);

	// �� 2675�� ���ڿ� �ݺ�
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int r;
		string p;
		cin >> r;
		cin >> p;

		for (int j = 0; j < p.length(); j++)
		{
			for (int k = 0; k < r; k++)
			{
				cout << p[j];
			}
		}
		cout << endl;
	}

	//// �� 10809�� ���ĺ� ã��
	//string input;
	//cin >> input;

	//string alphabet = "abcdefghijklmnopqrstuvwxyz";

	//for (int i = 0; i < 100; i++)
	//{
	//	if (input[i] == NULL)
	//		input[i] = (int)"A";
	//}

	//for (int i = 1; i < input.length() + 1; i++)
	//{
	//	if (input[i] == alphabet[i])
	//		cout << i << " ";
	//	if(input[i] != alphabet[i])
	//		cout << "-1" << " ";
	//}

#pragma region ���ĺ� ã�� ����
	string s;
	string abc = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	for (int i = 0; i < abc.length(); i++) {
		if (s.find(abc[i]) == string::npos)
			cout << -1 << " ";
		else {
			cout << s.find(abc[i]) << " ";
			continue;
		}
	}
#pragma endregion

	//// �� 2908�� ��� - ?? �Ʒ��� ���� �ٸ��ٰ� �� �Ǵ°��ΰ�
	//string a, b;
	//cin >> a >> b;

	//string best;

	//for (int i = 2; i >= 0; i--)
	//{
	//	if (a[i] > b[i])
	//	{
	//		best = a;
	//		break;
	//	}
	//	else if(a[i] < b[i])
	//	{
	//		best = b;
	//		break;
	//	}
	//}
	//cout << best[2] << best[1] << best[0] << endl;

	//// 2908�� ���
	//string x, y;
	//cin >> x >> y;

	//string bigger;

	//for (int i = 2; i >= 0; i--) {
	//	if (x[i] > y[i]) {
	//		bigger = x; 
	//		break;
	//	}
	//	else if (x[i] < y[i]) {
	//		bigger = y; 
	//		break;
	//	}
	//}
	//cout << bigger[2] << bigger[1] << bigger[0];


	//// �� 11720�� ������ ��
	//// string�� char�� ��������, �ƽ�Ű�ڵ� '0'�� ��, 48�� ����
	//int c;
	//cin >> c;
	//string n;
	//cin >> n;

	//int sum = 0;
	//for (int i = 0; i < c; i++)
	//{
	//	sum += n[i] - 48;
	//}
	//cout << sum << endl;

	//// �� 4344�� ����� �Ѱ��� - ... ����ΰ� �ʱ�ȭ�� �� �ȴ�
	//int testCount; // ���� �׽�Ʈ ����
	//std::cin >> testCount;

	//for (int i = 0; i < testCount; i++) // ����
	//{
	//	int score; // ���� ��� ����
	//	std::cin >> score;
	//	float mean = 0.0f; // ��� ��հ�

	//	for (int j = 0; j < score; j++) // ����
	//	{
	//		std::cin >> mean;
	//		mean += mean;
	//	}
	//	cout.precision(5); // �Ҽ��� �ڸ� 3�ڸ��������� ��������
	//	cout << mean / score << "%" << endl;
	//}

	//// �� 3052�� ������ -
	//int num, sum = 0, remainderArr[42] = { 0 };

	//for (int i = 0; i < 10; i++) 
	//{
	//	cin >> num;
	//	if (!remainderArr[num % 42]++)
	//		sum++;
	//}
	//cout << sum;

	//// �� 2577�� ������ ���� -
	//int a, b, c;        
	//int arr[10] = { 0 }; // 0���� �ʱ�ȭ 

	//cin >> a >> b >> c; 

	//int result = a * b * c;

	//while (result != 0) // 1�� �ڸ��� ����
	//{
	//	arr[result % 10] += 1;
	//	result /= 10;
	//}
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	//// �� 11654�� �ƽ�Ű �ڵ� 
	//char c;

	//cin >> c;
	//cout << (int)c << endl;

	//// �� 8958�� OX���� -
	//int T;
	//string s;

	//cin >> T;
	//for (int j = 0; j < T; j++) {
	//	cin >> s;
	//	int sum, cnt;
	//	sum = cnt = 0;
	//	for (int i = 0; i < s.length(); i++) {
	//		if (s[i] == 'O') cnt++;
	//		else cnt = 0;
	//		sum += cnt;
	//	}
	//	cout << sum << '\n';
	//}

	//// �� 2565�� �ִ�
	//int input;
	//int max = INT32_MIN;
	//int count = 0;
	//vector<int> n;
	//for (int i = 1; i <= 9; i++)
	//{
	//	cin >> input;
	//	n.push_back(input);

	//	if (max < input)
	//	{
	//		max = input;
	//		count = i;
	//	}
	//}
	//cout << max << "\n" << count;

	return 0;
}