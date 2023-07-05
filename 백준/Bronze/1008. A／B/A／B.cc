#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);

	double a = 0;
	double b = 0;
	std::cin >> a >> b;
	std::cout.precision(10);
	std::cout <<a / b << std::endl;

	return 0;
}