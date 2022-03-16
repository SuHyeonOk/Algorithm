#include <iostream>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	int a = 0;
	int b = 0;
	std::cin >> a >> b;
	std::cout << a - b << std::endl;

	return 0;
}