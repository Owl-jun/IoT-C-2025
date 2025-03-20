#include <iostream>

class Human {
private:
	char name[10];
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
	Human h("홍길동", 30);
	Human h3(std::move(h));	// move 는 return 값이 && 인 형변환 함수이다.
	return 0;
}