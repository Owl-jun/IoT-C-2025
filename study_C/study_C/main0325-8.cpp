#include <iostream>

// 38572번째 MyClass 설계
class MyClass {
	int num;
public:
	MyClass(int n) : num(n) {}
	MyClass(const MyClass& other) : num(other.num) { std::cout << this << " copy constructor" << std::endl; }
	~MyClass() { std::cout << this << "destructor" << std::endl; }
	void setData(int n) { num = n; }
};
MyClass func(MyClass obj) {
	std::cout << "func()" << std::endl;
	return obj;
}

int main()
{
	MyClass obj{ 10 };

	return 0;
}