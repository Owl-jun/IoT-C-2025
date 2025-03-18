#include <iostream>

int main()
{
	int num = 10;
	int num2 = 50;
	int& ref = num;
	ref = num2;
	std::cout << ref;
	std::cout << num;
	std::cout << num2 << std::endl;
	ref = 30;
	std::cout << ref;
	std::cout << num;
	std::cout << num2;

	return 0;
}