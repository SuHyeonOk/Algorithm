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

	//// ◆ 10818번 최소, 최대
	//int n, input;
	//cin >> n;

	//vector<int> v;
	//int min = INT32_MAX; // 왜 INT64_MAX로는 안 되는 걸까요.. 왜 -1값이 들어가 있는 거죠..ㅠ
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

	//// ◆ 1110번 더하기 사이클 
	//int input;
	//cin >> input;

	//int result = input; 
	//int sum = 0; // 더하기 결과
	//int count = 0; // N번째

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

	//// ◆ 10952번 A+B - 4
	//int a, b;
	//while (cin >> a >> b)
	//{
	//	cout << a + b << "\n";
	//}

	//// ◆ 10952번 A+B - 5
	//while (true)
	//{
	//	int a, b;
	//	cin >> a >> b;

	//	if (a == 0 && b == 0)
	//		break;

	//	cout << a + b << endl;
	//}

	//// ◆ 1546번 평균
	///*
	// 성적 평균 = (((단일 성적1 / 최댓 값) + ... + (단일 성적 N / 최댓 값)) / N ) * 100
	//		 = (((단일 성적1  + ... + 단일 성적 N) / 최댓 값) / N ) * 100
	//*/
	//int n;
	//cin >> n;

	//int m = 0; //  최대 점수
	//double result = 0;

	//double s;
	//for (int i = 0; i < n; i++)
	//{
	//	cin >> s;
	//	result += s;

	//	if (m < s) // 만약 기존 최댓값보다 크다면 입력받은 정수로 갱신
	//		m = s;
	//}

	//cout << ((result / m) / n) * 100;
	return 0;
}