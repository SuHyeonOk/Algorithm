#include <iostream>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int iMax{ -1 }, iTemp{ 0 }, iCount{ 0 };

	for (int i = 1; i <= 9; i++)
	{
		cin >> iTemp;

		if (iMax < iTemp)
		{
			iMax = iTemp;
			iCount = i;
		}
	}

	cout << iMax << '\n' << iCount;


	return 0;
}