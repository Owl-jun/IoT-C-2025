#include <iostream>

class Person {
private:
	char*	m_name;
	int		m_age;
public:
	void print() {
		std::cout << "이름 : " << m_name << " 나이 : " << m_age << std::endl;
	}
public:
	Person(const char* name , int age) 
		: m_name(new char[strlen(name) + 1])
		, m_age(age)
	{
		std::cout << "기본생성자 호출" << std::endl;
		strcpy_s(m_name, strlen(name) + 1, name);
	}

	Person(const Person& _other)
		: m_name(new char[strlen(_other.m_name) + 1])
		, m_age(_other.m_age)
	{
		std::cout << "복사생성자 호출" << std::endl;
		strcpy_s(m_name, strlen(_other.m_name) + 1, _other.m_name);
	}

	~Person()
	{
		std::cout << "소멸자 호출" << std::endl;
		delete[] m_name;
	}

};

int main() {
	Person p("정민식", 31);
	p.print();
	Person p2 = p;
	p2.print();
	return 0;
}