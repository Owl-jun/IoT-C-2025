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
	Human man("ȫ��", 30);
	man.showInfo();

	Human copyman = man;
	copyman.showInfo();
	return 0;
}