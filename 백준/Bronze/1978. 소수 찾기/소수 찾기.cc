#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// 1978

	int N{ 0 }, iDecimal{ 0 };
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		int iNum{ 0 };
		cin >> iNum;

		int iCount{ 0 };
		for (int i = 1; i <= iNum; i++)
		{
			if (0 == iNum % i) ++iCount;
		}

		if (2 == iCount) ++iDecimal;
	}

	cout << iDecimal;
	
	return 0;
}