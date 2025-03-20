#include <iostream>

class Person {
private:
	char*	m_name;
	int		m_age;
public:
	void print() {
		std::cout << "�̸� : " << m_name << " ���� : " << m_age << std::endl;
	}
public:
	Person(const char* name , int age) 
		: m_name(new char[strlen(name) + 1])
		, m_age(age)
	{
		std::cout << "�⺻������ ȣ��" << std::endl;
		strcpy_s(m_name, strlen(name) + 1, name);
	}

	Person(const Person& _other)
		: m_name(new char[strlen(_other.m_name) + 1])
		, m_age(_other.m_age)
	{
		std::cout << "��������� ȣ��" << std::endl;
		strcpy_s(m_name, strlen(_other.m_name) + 1, _other.m_name);
	}

	~Person()
	{
		std::cout << "�Ҹ��� ȣ��" << std::endl;
		delete[] m_name;
	}

};

int main() {
	Person p("���ν�", 31);
	p.print();
	Person p2 = p;
	p2.print();
	return 0;
}