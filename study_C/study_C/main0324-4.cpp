#include <iostream>

class SuperClass {
private:
	int num;
public:
	SuperClass(int n) 
		: num(n)
	{
		std::cout << num << "SuperClass ������ ȣ��" << std::endl;
	}
	~SuperClass()
	{
		std::cout << "SuperClass �Ҹ��� ȣ��" << std::endl;
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
		std::cout << subNum << "SubClass ������ ȣ��" << std::endl;
	}
	~SubClass()
	{
		std::cout << "SubClass �Ҹ��� ȣ��" << std::endl;
	}
};

int main()
{
	SuperClass s{ 1 };
	SubClass sub{ 2,22 };
	return 0;
}