#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

int main()
{
	ios_base::sync_with_stdio(false); std::cin.tie(NULL);
	// �� 2523�� �� ���
	int iInput;
	cin >> iInput;

	for (int i = 1; i <= iInput; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (int i = 1; i < iInput; i++)
	{
		for (int j = iInput; j > i; j--)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}