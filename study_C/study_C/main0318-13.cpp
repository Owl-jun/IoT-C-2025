#include <iostream>

class Human {
public:
	std::string name;

	virtual void print()
	{
		std::cout << name;
	}

	Human(std::string _name)
		: name(_name)
	{
		std::cout << "Human ������ ȣ��" << std::endl;
	}
	~Human(){
		std::cout << "Human �Ҹ��� ȣ��" << std::endl;
	}

};

class man : public Human {
	int age;
public:
	man(std::string _name, int _age)
		: Human(_name)
		, age(_age)
	{
		std::cout << "man ������ ȣ��" << std::endl;
	}
	~man(){
		std::cout << "man �Ҹ��� ȣ��" << std::endl;
	}

	void print()
	{
		std::cout << age << std::endl;
	}

};

int main()
{
	Human* pm = new Human("�ڿ���");
	man* m = new man("��ö��",32);
	pm->print();
	m->print();
	delete m;
	delete pm;
	return 0;
}