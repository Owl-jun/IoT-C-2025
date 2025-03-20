#include <iostream>

class Human {
private:
	char name[10]; // C스타일 배열은 이동이 절대안됨.
	int age;
public:
	void print() {
		std::cout << name << age << std::endl;
	}
public:
	Human(const char* _name, int _age)
		: age(_age)
	{
		strcpy_s(name, 10, _name);
	}
	Human(Human&& _other) noexcept
		: age(_other.age)
	{
		strcpy_s(name, 10, _other.name);
	}
};


int main()
{
	int a = 3;
	int b = std::move(a);



	a;
	b;
	return 0;
}