/*
	step1. 이름과 전화번호는 동적할당.
*/
#include <iostream>

class Human {
private:
	char* pName;
	int age;
	char* phone;
public:
	void getData()
	{
		std::cout << "Name : " << pName << " age : " << age << " phone : " << phone << std::endl;
	}
public:
	Human(const char* _name , int _age , const char* _phone) 
		: age(_age)
		, pName(new char[strlen(_name) + 1])
		, phone(new char[strlen(_phone) + 1])
	
	{
		strcpy_s(pName, strlen(_name) + 1 , _name);
		strcpy_s(phone, strlen(_phone) + 1, _phone);
	}
	~Human() 
	{
		delete[] pName;
		delete[] phone;
	}
};

int main() {
	Human h1{ "홍길동", 30, "010-1234-1234" };
	Human h2{ "박춘길", 47, "010-2345-6789" };
	Human h3{ "김복자", 29, "010-3456-7890" };
	h1.getData();
	h2.getData();
	h3.getData();
	return 0;
}