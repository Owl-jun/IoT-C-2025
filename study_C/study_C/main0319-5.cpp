#include <iostream>
#define _CRT_SECURE_NO_WARNINGS

class MyClass {
private:
	int id;
	char name[20];
	int age;
public:
	void setData(int _id, const char* _name , int _age) {
		id = _id;
		strncpy_s(name, _name, 20 - 1);
		name[19] = '\0';
		age = _age;
	}
	void getData() {
		std::cout << "id : " << id << " name : " << name << " age : " << age;
	}
	
};

int main() {
	MyClass obj;
	obj.setData(1,"±èÃ¶¼ö",20);
	obj.getData();
	return 0;
}