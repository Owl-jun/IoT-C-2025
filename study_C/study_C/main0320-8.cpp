#include <iostream>
/*
	이동 생성자(T&&)
	r-value reference 를 파라미터로 갖는 이동 생성자
*/

class Human {
private:
	char name[10];
	int age;
public:
	Human(char* _name, int _age)
		: age(_age)
	{
		strcpy_s(name, 10, _name);
	}
	Human(Human&& _other) 
		: age(_other.age)
	{
		strcpy_s(name, 10, _other.name);
	}
};


int main()
{


	return 0;
}