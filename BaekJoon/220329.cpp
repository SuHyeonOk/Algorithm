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

	//// �� 10871�� X���� ���� ��
	//int n, x;
	//cin >> n >> x;

	//for (int i = 0; i < n; i++)
	//{
	//	int a;
	//	cin >> a;
	//	if (a < x)
	//		cout << a << " ";
	//}

	//// �� 2439�� ����� - 2
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = n; j > i; j--)
	//	{
	//		cout << " ";
	//	}
	//	for (int j = 0; j < i; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << "\n";
	//}

	//// �� 2438�� ����� - 1
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << "\n";
	//}

	//// �� 11022�� A+B - 8
	//int t;
	//cin >> t;

	//for (int i = 1; i <= t; i++)
	//{
	//	int a, b;
	//	cin >> a >> b;
	//	cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
	//}

	//// �� 11021�� A+B - 7
	//int t;
	//cin >> t;

	//for (int i = 1; i <= t; i++)
	//{
	//	int a, b;
	//	cin >> a >> b;
	//	cout << "Case #" << i << ": " << a + b << endl;
	//}

	//// �� 2742�� ���N 
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	cout << n - i + 1 << endl;
	//}

	//// ���N �ٸ� ����
	//int n;
	//cin >> n;

	//for (int i = n; i >= 1; i--)
	//{
	//	cout << i << endl;
	//}

	//// �� 2741�� N���
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	cout << i << endl;
	//}

	//// �� 15552�� ���� A + B
	//// ios_base::sync_with_stdio(false); cin.tie(NULL); �� ���� �ٿ��ָ� �ȴ�
	//ios_base::sync_with_stdio(false); cin.tie(NULL);
	//int count;
	//cin >> count;

	//for (int i = 0; i < count; i++)
	//{
	//    int a, b;
	//    cin >> a >> b;
	//    cout << a + b << endl;
	//}

	//// �� 8393�� n��° ������ �� ���ϱ�
	//int n;
	//cin >> n;
	//int result = 0;

	//for (int i = 0; i <= n; i++)
	//{
	//    result += i;
	//}

	//cout << result << endl;

	//// �� 10950�� A + B 5���� ���̽�
	//int count;
	//cin >> count;

	//for (int i = 0; i < count; i++)
	//{
	//    int a = 0, b = 0;
	//    cin >> a >> b;
	//    cout << a + b << endl;
	//}

	//// �� 2739�� ������ N�� ���
	//int N;
	//cin >> N;

	//for (size_t i = 1; i <= 9; i++)
	//{
	//    cout << N << " * " << i << " = " << N * i << endl;        
	//}

	//// �� 2884�� �˶��ð� ������ ���� ����
	//int H, M;
	//cin >> H >> M;

	//if (M < 45)
	//{
	//	M += 15;
	//	if (--H < 0)
	//		H = 23;
	//}
	//else
	//	M -= 45;

	//cout << H << " " << M << endl;

	//// �˶��ð� �ʺ��� ����
	//if (M >= 45)
	//	cout << H << " " << M - 45 << endl;
	//else // ���� �ð��� 45�к��� �۴ٸ�
	//{
	//	M = 60 - 45 + M;
	//	H--; // 0 <= h <= 23

	//	//if (H < 0) 
	//	if (H == -1)
	//		H = 23;

	//	cout << H << " " << M << endl;
	//}

	//// �˶��ð� ��� ����
	//if (M < 45)
	//	H = (H + 24 - 1) % 24;
	//M = (M + 60 - 45) % 60;

	//cout << H << " " << M;

	//// �� 14681�� ��и� ����
	//int a, b;
	//cin >> a >> b;

	//if (a > 0 && b > 0)
	//    cout << "1" << endl;
	//else if (a < 0 && b > 0)
	//    cout << "2" << endl;
	//else if (a < 0 && b < 0)
	//    cout << "3" << endl;
	//else
	//    cout << "4" << endl;

	return 0;
}