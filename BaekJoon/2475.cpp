#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
#define endl '\n'

int main()
{
	int arr[10];
	int arr2[10];
	int input;
	vector<int> v;
	vector<int> v2;
	int result = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> input;
		//arr[i] = input;
		v.push_back(input);
	}

	for (int i = 0; i < 5; i++)
	{
		v2[i] = v[i] * v[i];
		result += v2[i];
		/*arr2[i] = v[i] * v[i];
		result += +arr2[i];*/
	}

	cout << result % 10 << endl;

	return 0;
}