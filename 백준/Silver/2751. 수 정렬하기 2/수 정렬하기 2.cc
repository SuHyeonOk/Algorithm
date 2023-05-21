#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// 2751번 : 수 정렬하기 2

	int N{ 0 };
	cin >> N;

	vector<int> vec;
	for (int i = 0; i < N; i++)
	{
		int iInput;
		cin >> iInput;
		vec.push_back(iInput);
	}

	sort(vec.begin(), vec.end());

	size_t iSize = vec.size();
	for (size_t i = 0; i < iSize; i++)
	{
		cout << vec[i] << "\n";
	}

}