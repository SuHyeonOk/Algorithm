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

	// ◆ 2577번 숫자의 개수
	int a, b, c;        
	int arr[10] = { 0 }; // 0으로 초기화 

	cin >> a >> b >> c; 

	int result = a * b * c;

	// 1의 자리를 얻어옴
	while (result != 0) 
	{
		arr[result % 10] += 1;
		result /= 10;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
}