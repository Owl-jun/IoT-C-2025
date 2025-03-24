#include <iostream>

class SuperClass {
private:
	int num;
public:
	SuperClass(int n) 
		: num(n)
	{
		std::cout << num << "SuperClass 생성자 호출" << std::endl;
	}
	~SuperClass()
	{
		std::cout << "SuperClass 소멸자 호출" << std::endl;
	}
};
class SubClass : public SuperClass {
private:
	int subNum;
public:
	SubClass(int n, int sn) 
		: SuperClass(n)
		, subNum(sn)
	{
		std::cout << subNum << "SubClass 생성자 호출" << std::endl;
	}
	~SubClass()
	{
		std::cout << "SubClass 소멸자 호출" << std::endl;
	}
};

int main()
{
	SuperClass s{ 1 };
	SubClass sub{ 2,22 };
	return 0;
}