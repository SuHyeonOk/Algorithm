#pragma once // 헤더의 중복 선언을 방지
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

	//// ◆ 10871번 X보다 작은 수
	//int n, x;
	//cin >> n >> x;

	//for (int i = 0; i < n; i++)
	//{
	//	int a;
	//	cin >> a;
	//	if (a < x)
	//		cout << a << " ";
	//}

	//// ◆ 2439번 별찍기 - 2
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

	//// ◆ 2438번 별찍기 - 1
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

	//// ◆ 11022번 A+B - 8
	//int t;
	//cin >> t;

	//for (int i = 1; i <= t; i++)
	//{
	//	int a, b;
	//	cin >> a >> b;
	//	cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
	//}

	//// ◆ 11021번 A+B - 7
	//int t;
	//cin >> t;

	//for (int i = 1; i <= t; i++)
	//{
	//	int a, b;
	//	cin >> a >> b;
	//	cout << "Case #" << i << ": " << a + b << endl;
	//}

	//// ◆ 2742번 찍기N 
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	cout << n - i + 1 << endl;
	//}

	//// 찍기N 다른 버전
	//int n;
	//cin >> n;

	//for (int i = n; i >= 1; i--)
	//{
	//	cout << i << endl;
	//}

	//// ◆ 2741번 N찍기
	//int n;
	//cin >> n;

	//for (int i = 1; i <= n; i++)
	//{
	//	cout << i << endl;
	//}

	//// ◆ 15552번 빠른 A + B
	//// ios_base::sync_with_stdio(false); cin.tie(NULL); 이 줄을 붙여주면 된다
	//ios_base::sync_with_stdio(false); cin.tie(NULL);
	//int count;
	//cin >> count;

	//for (int i = 0; i < count; i++)
	//{
	//    int a, b;
	//    cin >> a >> b;
	//    cout << a + b << endl;
	//}

	//// ◆ 8393번 n번째 까지의 합 구하기
	//int n;
	//cin >> n;
	//int result = 0;

	//for (int i = 0; i <= n; i++)
	//{
	//    result += i;
	//}

	//cout << result << endl;

	//// ◆ 10950번 A + B 5번의 케이스
	//int count;
	//cin >> count;

	//for (int i = 0; i < count; i++)
	//{
	//    int a = 0, b = 0;
	//    cin >> a >> b;
	//    cout << a + b << endl;
	//}

	//// ◆ 2739번 구구단 N단 출력
	//int N;
	//cin >> N;

	//for (size_t i = 1; i <= 9; i++)
	//{
	//    cout << N << " * " << i << " = " << N * i << endl;        
	//}

	//// ◆ 2884번 알람시계 제출한 복사 버전
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

	//// 알람시계 초보자 버전
	//if (M >= 45)
	//	cout << H << " " << M - 45 << endl;
	//else // 지금 시간이 45분보다 작다면
	//{
	//	M = 60 - 45 + M;
	//	H--; // 0 <= h <= 23

	//	//if (H < 0) 
	//	if (H == -1)
	//		H = 23;

	//	cout << H << " " << M << endl;
	//}

	//// 알람시계 고수 버전
	//if (M < 45)
	//	H = (H + 24 - 1) % 24;
	//M = (M + 60 - 45) % 60;

	//cout << H << " " << M;

	//// ◆ 14681번 사분면 고르기
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