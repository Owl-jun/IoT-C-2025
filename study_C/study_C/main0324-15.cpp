#include <iostream>

class Base {
public:
	void func1() { std::cout << "Basd::func1()" << std::endl; }
};
class Derived : public Base {
public:
	void f() { std::cout << "Derived::func()" << std::endl; }
	void func1() { std::cout << "Derived::func1()" << std::endl; }
};
class Derived2 : public Derived {
public:
	void func() { std::cout << "Derived::func()" << std::endl; }
	void func1() { std::cout << "Derived2::func()1" << std::endl; }
};

int main()
{
	Base* bptr;
	Derived dobj;
	bptr = static_cast<Base*>(&dobj);
	bptr->func1();

	Base bobj;
	Derived* dptr;
	dptr = static_cast<Derived*>(&bobj);
	dptr->f();
	dptr->func1();

	Derived2* dptr2 = static_cast<Derived2*>(dptr);

	return 0;
}