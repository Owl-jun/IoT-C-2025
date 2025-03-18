#include <iostream>

class Human {
public:
	std::string name;

	virtual void print()
	{
		std::cout << name;
	}

	Human(std::string _name)
		: name(_name)
	{
		std::cout << "Human 생성자 호출" << std::endl;
	}
	~Human(){
		std::cout << "Human 소멸자 호출" << std::endl;
	}

};

class man : public Human {
	int age;
public:
	man(std::string _name, int _age)
		: Human(_name)
		, age(_age)
	{
		std::cout << "man 생성자 호출" << std::endl;
	}
	~man(){
		std::cout << "man 소멸자 호출" << std::endl;
	}

	void print()
	{
		std::cout << age << std::endl;
	}

};

int main()
{
	Human* pm = new Human("박원축");
	man* m = new man("김철수",32);
	pm->print();
	m->print();
	delete m;
	delete pm;
	return 0;
}