#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

int main()
{
	// 15829
	// 해시 함수란 임의의 길이의 입력을 받고서 고정된 길이의 출력을 내보내는 함수로 정의한다.
	// 입력은 영문 소문자 a~z 총 1~26
	// 해시 함수 정의에서 유연한 범위의 출력 위해 m으로 나눈다.

	// a~z 정보 저장
	map<char, int> mapAlphabet;
	char szLowercase = 97;
	for (size_t i = 1; i <= 26; i++)
	{
		mapAlphabet.insert(pair<char, int>(szLowercase, i));
		++szLowercase;
	}

	// 입력
	int length{ 0 };
	vector<char> vecInput;

	cin >> length;
	for (size_t i = 0; i < length; i++)
	{
		char szInput;
		cin >> szInput;
		vecInput.push_back(szInput);
	}

	// 문자에 해당하는 값 찾기
	int iResult{ 0 };
	for (size_t i = 0; i < length; i++)
	{
		int iNum{ 0 };
		map<char, int>::iterator iter = mapAlphabet.find(vecInput[i]);
		if (iter != mapAlphabet.end())
			iNum = iter->second;

		// 결과 값 계산하기
		int iSquare{ 1 };
		for (size_t j = 0; j < i; j++)
			iSquare *= 31;

		iResult += iNum * iSquare;
	}

	cout << iResult << '\n';

	return 0;
}