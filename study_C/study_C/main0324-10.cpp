#include <iostream>

class Base {
public:
	virtual void show() { printf("Base Class"); }
};

class Derived : public Base {
public:
	void show() { printf("Derived Class"); }
};

int main() {

	Base bobj;
	Derived* dptr = nullptr;
	
	dptr = (Derived*)&bobj;
	dptr->show();
	return 0;
}