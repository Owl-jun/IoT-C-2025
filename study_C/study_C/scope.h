#pragma once

class A {
private:
	int a;

public:
	void AInfo() {
		std::cout << "a : " << a << std::endl;
	}

	A(int aa):a(aa)
	{}
	~A()
	{}

private:


};