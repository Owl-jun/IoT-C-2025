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
	Human(const char* _name, int _age)
		: name(new char[strlen(_name)+1])
		, age(_age)
	{
		strcpy_s(name, strlen(_name) + 1, _name);
	}
	Human(const Human& _other)
		: name(new char[strlen(_other.name)+1])
		, age(_other.age)
	{
		strcpy_s(name, strlen(_other.name)+1, _other.name);
	}
	~Human()
	{
		delete[] name;
	}
};

int main() {
	Human man("홍명보", 30);
	man.showInfo();

	Human copyman = man;
	copyman.showInfo();
	return 0;
}