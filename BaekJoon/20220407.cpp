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
	//// �� 1157�� �ܾ� ����
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

	//// �� 1152�� �ܾ��� ���� - ...
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

	//// 1152�� �ܾ��� ����
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

	//// �� 10809�� ���ĺ� ã��
	//string input;
	//cin >> input;

	//string alphabet = "abcdefghijklmnopqrstuvwxyz"; // baekjoon

	//int count = input.length(); // input�� ���̰� �ʿ��ϴ� �ֳ��ϸ� input���� �� index�� ��ȣ�� �˾ƾ� �ϱ� ����
	//int arr[26];

	////memset(arr, -1 , sizeof(arr)); // 0. -1�� ������ (���ؿ�)
	////fill(arr, arr + 26, -1); // #include <algorithm>

	//for (int i = 0; i < 26; i++) // -1�� �ʱ�ȭ
	//{
	//	arr[i] = -1;
	//}

	//for (int i = 0; i < count; i++) // ��� ����
	//{
	//	int index = input[i] - 'a';
	//	if (arr[index] == -1)
	//	{
	//		arr[index] = i;
	//	}
	//}

	//// �ʺ� ����
	//for (int i = 0; i < count; i++) // input ��
	//{	
	//	for (int j = 0; j < alphabet.length(); j++) // alphabet ��
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

	//for (int i = 0; i < 26; i++) // ��¹�
	//{
	//	cout << arr[i] << " ";
	//}

	return 0;
}