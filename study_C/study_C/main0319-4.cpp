#include <iostream>

class MyClass {
private:
	int m_num1;
	int m_num2;
public:
	void printData() {
		std::cout << "나는 MyClass의 인스턴스 입니다.";
		std::cout << "m_num1 : " << m_num1 << " m_num2 : " << m_num2 << std::endl;
	}
public:
	MyClass(){}	

	MyClass(int _n1)
		: m_num1(_n1)
	{ }
	MyClass(int _n1, int _n2)
		: m_num1(_n1)
		, m_num2(_n2)
	{ }
};

int main() {
	MyClass o;
	MyClass obj1(100, 200);
	MyClass obj2(100);
	obj1.printData();
	obj2.printData();
	return 0;
}