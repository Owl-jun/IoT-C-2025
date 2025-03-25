#include <iostream>

int main() {

	int num = 10;
	std::cout << ++num << std::endl;

	volatile const int num2 = 10;
	//std::cout << ++num2 << std::endl;

	int* np = const_cast<int*>(&num2);
	std::cout << ++(*np) << std::endl;
	std::cout << num2 << std::endl;


	return 0;
}