/*
	virtual function
*/

#include <iostream>

class Base {
public:
	virtual void func1() { std::cout << "B::func1()" << std::endl; }
	virtual void func2() { std::cout << "B::func2()" << std::endl; }
	void func3() { std::cout << "B::func3()" << std::endl; }
};
class Derived : public Base {
public:
	void func1() override { std::cout << "D::func1()" << std::endl; }	// 가상함수를 재정의하는 멤버함수를 나타냄.
	void func3() { std::cout << "D::func3()" << std::endl; }
	void func4() { std::cout << "D::func4()" << std::endl; }
};

int main()
{
	Base b;
	Derived d;
	Base* bptr = new Derived();
	Derived* pD = (Derived*)bptr;
	pD->func4();
	
	return 0;
}