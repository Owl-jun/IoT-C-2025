#include <iostream>

class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		printf("������ȣ��\n");
		strcpy_s(this->name,20, name);
		this->age = age;
		strlen()
	}
	Person(const Person& _other)
	{
		printf("��������� ȣ��\n");
		strcpy_s(this->name,20, _other.name);
		this->age = _other.age;
	}
	void printP()
	{
		std::cout << name << " " << age << std::endl;
	}
	~Person() {
		printf("�Ҹ��� ȣ��\n");
	}
};

int main() {
	Person p("ȫ�浿", 30);
	p.printP();

	Person p2 = p;
	p.printP();
	return 0;
}