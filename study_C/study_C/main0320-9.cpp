#include <iostream>

class Human {
private:
	char name[10]; // C��Ÿ�� �迭�� �̵��� ����ȵ�.
	int age;
public:
	void print() {
		std::cout << this->name << this->age << std::endl;
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
	Human h("ȫ�浿", 30);
	h.print();
	Human h3(std::move(h));
	h3.print();
	h.print();
	return 0;
}