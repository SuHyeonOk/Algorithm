#include <iostream>
using namespace std;

int main()
{
	size_t iInput = 0;
	cin >> iInput;

	for (size_t i = 1; i < iInput + 1; i++)
	{
		for (size_t j = 0; j < iInput; j++)
		{
			if (i + 1 > iInput - j)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
}