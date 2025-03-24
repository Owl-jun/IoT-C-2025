#include <iostream>

class Base {
public:
	virtual void show() { std::cout << "Base Class!!" << std::endl; }
};
class Derived : public Base {
public:
	void show() { std::cout << "Derived Class!!" << std::endl; }
};
int main() {
	Base b;
	Base* d = new Derived();
	b.show();
	d->show();
	return 0;
}