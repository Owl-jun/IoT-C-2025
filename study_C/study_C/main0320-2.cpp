#include <iostream>

class Person {
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age) {
		printf("생성자호출\n");
		strcpy_s(this->name,20, name);
		this->age = age;
		strlen()
	}
	Person(const Person& _other)
	{
		printf("복사생성자 호출\n");
		strcpy_s(this->name,20, _other.name);
		this->age = _other.age;
	}
	void printP()
	{
		std::cout << name << " " << age << std::endl;
	}
	~Person() {
		printf("소멸자 호출\n");
	}
};

int main() {
	Person p("홍길동", 30);
	p.printP();

	Person p2 = p;
	p.printP();
	return 0;
}