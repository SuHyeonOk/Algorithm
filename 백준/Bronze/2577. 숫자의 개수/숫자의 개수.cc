#include <iostream>
#include <vector>

using namespace std;

unsigned int ans;

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int A{ 0 }, B{ 0 }, C{ 0 }, iResult{ 0 };
	cin >> A >> B >> C;
	iResult = A * B * C;

	int arr[10]{ 0 };
	while (iResult != 0)
	{
		arr[iResult % 10] ++;
		iResult /= 10;
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << '\n';
	}

    return 0;
}