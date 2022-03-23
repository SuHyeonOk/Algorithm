#include <iostream>
#include <vector>
#include <string>


int main()
{
	// 18108_ 입력받은 숫자에 일정한 값 빼서 출력하기
	int input;
	std::cin >> input;

	std::cout << input - 543 << std::endl;

	// 10926_ 입력받은 변수에 ??! 붙이기
	std::string input;
	std::cin >> input;

	std::cout << input << "??!" << std::endl;
}