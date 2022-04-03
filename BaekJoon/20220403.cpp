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
	std::cin.tie(NULL);

	// ◆ 2908번 상수
	string x, y;
	cin >> x >> y;

	string bigger;

	for (int i = 2; i >= 0; i--) {
		if (x[i] > y[i]) {
			bigger = x; break;
		}
		else if (x[i] < y[i]) {
			bigger = y; break;
		}
	}

	cout << bigger[2] << bigger[1] << bigger[0];


	//// ◆ 11720번 숫자의 합
	//// string는 char의 모음으로, 아스키코드 '0'의 값, 48을 빼줌
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

	//// ◆ 4344번 평균은 넘겠지 - ... 어디서인가 초기화가 안 된다
	//int testCount; // 세로 테스트 개수
	//std::cin >> testCount;

	//for (int i = 0; i < testCount; i++) // 세로
	//{
	//	int score; // 가로 계산 개수
	//	std::cin >> score;
	//	float mean = 0.0f; // 결과 평균값

	//	for (int j = 0; j < score; j++) // 가로
	//	{
	//		std::cin >> mean;
	//		mean += mean;
	//	}
	//	cout.precision(5); // 소수점 자리 3자리수까지만 나오도록
	//	cout << mean / score << "%" << endl;
	//}

	//// ◆ 3052번 나머지 -
	//int num, sum = 0, remainderArr[42] = { 0 };

	//for (int i = 0; i < 10; i++) 
	//{
	//	cin >> num;
	//	if (!remainderArr[num % 42]++)
	//		sum++;
	//}
	//cout << sum;

	//// ◆ 2577번 숫자의 개수 -
	//int a, b, c;        
	//int arr[10] = { 0 }; // 0으로 초기화 

	//cin >> a >> b >> c; 

	//int result = a * b * c;

	//while (result != 0) // 1의 자리를 얻어옴
	//{
	//	arr[result % 10] += 1;
	//	result /= 10;
	//}
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << arr[i] << endl;
	//}

	//// ◆ 11654번 아스키 코드 -
	//char c;

	//cin >> c;
	//cout << (int)c << endl;

	//// ◆ 8958번 OX퀴즈 -
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

	//// ◆ 2565번 최댓값
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