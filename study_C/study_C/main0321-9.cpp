/*
	char* name	�����Ҵ�
	int age
	void showInfo()
	���� 30, �̸� ȫ���� man ��ü ����
	man ��ü�� �����Ͽ� copyman ��ü�� �����Ͻÿ�.
*/
#include <iostream>

class Human {
private:
	char* name;
	int age;
public:
	void showInfo()
	{
		std::cout << "name : " << name << " age : " << age << std::endl;
	};
public:
	Human() { std::cout << "default" << std::endl; }
	Human(const char* _name, int _age)
		: name(new char[strlen(_name) + 1])
		, age(_age)
	{
		std::cout << "cons" << std::endl;
		strcpy_s(name, strlen(_name) + 1, _name);
	}
	Human(const Human& _other)
		: name(new char[strlen(_other.name) + 1])
		, age(_other.age)
	{
		std::cout << "copy" << std::endl;
		strcpy_s(name, strlen(_other.name) + 1, _other.name);
	}
	~Human()
	{
		std::cout << "dest" << std::endl;
		delete[] name;
	}
	Human& operator = (const Human& _other)
	{
		name = new char[strlen(_other.name) + 1];
		strcpy_s(name, strlen(_other.name) + 1, _other.name);
		age = _other.age;
		return *this;
	}
};

int main() {
	Human man("ȫ��", 30);
	man.showInfo();

	Human copyman(man);
	copyman.showInfo();

	Human xman;
	xman = copyman;
	xman.showInfo();
	return 0;
}