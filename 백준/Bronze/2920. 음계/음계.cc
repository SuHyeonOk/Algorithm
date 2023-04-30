#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 2920
	
	int arrNum[8]{ 0 };
	for (size_t i = 0; i < 8; i++)
	{
		cin >> arrNum[i];
	}

	if (1 == arrNum[0])
	{
		for (int i = 1; i <= 8; ++i)
		{
			if (i != arrNum[i - 1])
			{
				cout << "mixed" << endl;
				break;
			}

			if(i == 8) cout << "ascending" << endl;
		}
	}
	else
	{
		for (int i = 8; i >= 1; --i)
		{
			int iTemp = arrNum[8 - i];
			if (i != iTemp)
			{
				cout << "mixed" << endl;
				break;
			}

			if (i == 1) cout << "descending" << endl;
		}
	}

	return 0;
}