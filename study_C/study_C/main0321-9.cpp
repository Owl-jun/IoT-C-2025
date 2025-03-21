/*
	char* name	동적할당
	int age
	void showInfo()
	나이 30, 이름 홍명보인 man 객체 생성
	man 객체를 복사하여 copyman 객체를 생성하시오.
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
	Human man("홍명보", 30);
	man.showInfo();

	Human copyman(man);
	copyman.showInfo();

	Human xman;
	xman = copyman;
	xman.showInfo();
	return 0;
}