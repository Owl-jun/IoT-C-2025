#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

class MyClass {
private:
	int id;
	char name[20];
	int age;

public:
	void getData() {
		std::cout << "id : " << id << " name : " << name << " age : " << age;
	}

public:

	MyClass(int _id, const char* _name, int _age)
		: id(_id)
		, age(_age)
	{
		strncpy_s(name, _name, 20 - 1);
		name[19] = '\0';
	}

	~MyClass()
	{}
};

int main() {
	MyClass obj(1,"±èÃ¶¼ö",30);
	obj.getData();
	return 0;
}