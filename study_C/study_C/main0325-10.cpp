/*
	shared_ptr
*/

#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "MyClass constructor!!" << std::endl; }
	~MyClass() { std::cout << "MyClass destructor!!" << std::endl; }
	void func() { std::cout << "Hi shared_ptr" << std::endl; }
};

int main()
{
	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
	std::shared_ptr<MyClass> ptr2 = ptr;
	printf("ptr�� ptr2�� ������ ��ü�� ����Ų��. �����Ѵ�.\n");
	ptr->func();
	ptr2->func();
	std::cout << ptr2.use_count() << std::endl;
	
	return 0;
}