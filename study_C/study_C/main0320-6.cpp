#include <iostream>

class MyClass {
private:
	int value;
public:
	MyClass(int value) {
		printf("��ȯ ������ ȣ��\n");
		this->value = value;
	}

	void printMyClass() {
		printf("value : %d\n", value);
	}
	
};

int main()
{
	//MyClass obj = 33;
	//obj.printMyClass();

	MyClass obj2(10);
	obj2.printMyClass();

	return 0;
}