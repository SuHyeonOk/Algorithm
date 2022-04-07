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
	//// ◆ 1157번 단어 공부
	//// https://jaynamm.tistory.com/entry/%EB%B0%B1%EC%A4%80-%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98-1157%EB%B2%88-%EB%8B%A8%EC%96%B4-%EA%B3%B5%EB%B6%80
	//string input;
	//cin >> input;

	//int count = input.length();

	//vector<char>v;
	//vector<char>c;

	//for (int i = 0; i < count; i++)
	//{
	//	v.push_back(input[i]);
	//}

	//char result = ' ';
	//for (int i = 0; i < count; i++)
	//{
	//	for (int j = i; j < count; j++)
	//	{
	//		if (v[i] == v[j])
	//		{
	//			c.push_back(v[i]);
	//		}
	//	}
	//}
	//
	//int temp = 0;
	//for (int i = 0; i < c.size(); i++)
	//{
	//	if (c[i] == c[i] + 1)
	//		temp++;
	//}

	//if (temp >= 1)
	//	cout << (char)c[0] << endl;
	//else if (temp < 1)
	//	cout << "?" << endl;

	//// ◆ 1152번 단어의 개수 - ...
	//string input;

	//string find = "\0";
	//int count = 0;

	//while (true)
	//{
	//	cin >> input;
	//	count++;
	//	if (input == find)
	//		break;
	//}

	//cout << count << endl;

	//// 1152번 단어의 개수
	//string s;
	//getline(cin, s); // https://knowable.tistory.com/24

	//int cnt = 0; 
	//bool flag = true;
	//for (int i = 0; i < s.length(); i++) 
	//{
	//	if (s[i] == ' ') 
	//	{
	//		flag = true;
	//	}
	//	else if (flag) 
	//	{
	//		flag = false;
	//		cnt++;
	//	}
	//}
	//cout << cnt;

	//// ◆ 10809번 알파벳 찾기
	//string input;
	//cin >> input;

	//string alphabet = "abcdefghijklmnopqrstuvwxyz"; // baekjoon

	//int count = input.length(); // input의 길이가 필요하다 왜냐하면 input값도 각 index의 번호를 알아야 하기 때문
	//int arr[26];

	////memset(arr, -1 , sizeof(arr)); // 0. -1만 가능함 (백준용)
	////fill(arr, arr + 26, -1); // #include <algorithm>

	//for (int i = 0; i < 26; i++) // -1로 초기화
	//{
	//	arr[i] = -1;
	//}

	//for (int i = 0; i < count; i++) // 고수 버전
	//{
	//	int index = input[i] - 'a';
	//	if (arr[index] == -1)
	//	{
	//		arr[index] = i;
	//	}
	//}

	//// 초보 버전
	//for (int i = 0; i < count; i++) // input 값
	//{	
	//	for (int j = 0; j < alphabet.length(); j++) // alphabet 값
	//	{
	//		if (input[i] == alphabet[j])
	//		{
	//			if (arr[j] != -1)
	//				break;
	//			arr[j] = i;
	//			break;
	//		}			
	//	}
	//}

	//for (int i = 0; i < 26; i++) // 출력문
	//{
	//	cout << arr[i] << " ";
	//}

	return 0;
}