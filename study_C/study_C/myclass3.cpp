#include <iostream>
#include <cstring>  // strcpy, strlen »ç¿ë


class MyClass {
private:
	int id;
	char* name;
	int age;

public:
	void getData() {
		std::cout << "id : " << id << " name : " << name << " age : " << age << std::endl;
	}

	MyClass(int _id, const char* _name, int _age)
		: id(_id), age(_age)
	{
		name = new char[strlen(_name) + 1];
		strcpy_s(name, strlen(_name) + 1, _name);
	}
	
	~MyClass()
	{
		delete[] name; 
	}
};


int main() {
	MyClass obj(1, "±èÃ¶¼ö", 30);
	MyClass* pObj = &obj;

	(*pObj).getData();
	pObj->getData();
	obj.getData();
	
	return 0;
}
