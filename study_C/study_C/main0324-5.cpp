#include <iostream>

class MyClass {
public:
	void showMyClass() {
		std::cout << "Hello World!!" << std::endl;
	}
};

int main() {
	MyClass obj;
	MyClass* ptr;
	ptr = &obj;
	ptr->showMyClass();

	return 0;
}