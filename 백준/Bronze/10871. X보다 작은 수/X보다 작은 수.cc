#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int Count = 0;
	int Max = 0;

	std::cin >> Count >> Max;

	for (int i = 0; i < Count; i++)
	{
		int temp;
		std::cin >> temp;
		if (temp >= Max)
			continue;
		else
		{
			std::cout << temp << " ";
		}
	}


	return 0;
}