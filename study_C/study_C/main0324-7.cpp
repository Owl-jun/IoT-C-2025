#include <iostream>

class MyClass {
public:
	int value;
	MyClass() {}
	MyClass(int v) 
		: value(v) 
	{
	}
	void showMyClass() {
		std::cout << "value : " << value << std::endl;
	}
};

int main()
{
	MyClass* ptr = new MyClass(3);
	ptr->showMyClass();
	printf("value : %d", ptr->value);

	delete ptr;
	
	MyClass obj{};
	ptr = &obj;
	ptr->showMyClass();
	return 0;
}