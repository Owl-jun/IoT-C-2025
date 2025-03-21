/*

*/

#include <iostream>

template <typename T, typename TT>
void func(T a, TT b) {
	std::cout << a << std::endl;
	std::cout << b << std::endl;
}

int main() {

	func<float>(10, 3.14);
	func("Template", 3.14);
	func<const char*, double>("Hello", 3.14159);

	return 0;
}