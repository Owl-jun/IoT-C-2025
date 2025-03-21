#include <iostream>

class Person {
private:
	char m_name[20];
	int m_age;
public:
	void printP() {
		std::cout << "m_name : " << m_name << " m_age : " << m_age << std::endl;
	}
public:
	Person(const char* _name, int _age)
		: m_age(_age)
	{
		std::cout << "»ý¼ºÀÚ È£Ãâ" << std::endl;
		strcpy_s(m_name, 20, _name);
	}
	~Person() {}
	
};


int main() {
	
	Person p("±èÃ¶¼÷", 29);
	p.printP();

	Person p2(p);
	p2.printP();

	Person p3 = p2;
	p3.printP();

	
	return 0;
}