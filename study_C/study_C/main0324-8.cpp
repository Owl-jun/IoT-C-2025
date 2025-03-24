#include <iostream>

class MyClass {
public:
	void show() {
		std::cout << "Hello!!" << std::endl;
	}
};

int main() {
	MyClass* ptr = nullptr;
	//printf("ptr : %u\n", *ptr);
	if (ptr != nullptr) ptr->show();
	else std::cout << "ptr is null";


	return 0;
}