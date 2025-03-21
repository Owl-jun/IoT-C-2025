#include <iostream>

class MyClass {
private:
	int value;
	friend std::ostream& operator<< (std::ostream & os, const MyClass & mc);
public:
	MyClass(int n): value(n){}
	MyClass operator + (const MyClass _other)
	{
		std::cout << "+ overloading" << value+_other.value << std::endl;
		return MyClass(value + _other.value);
	}
};

std::ostream& operator<< (std::ostream& os, const MyClass& mc)
{
	os << mc.value << std::endl;
	return os;
}

int main()
{
	MyClass obj(10);
	std::cout << obj;
	MyClass obj2(20);
	std::cout << obj2;
	MyClass obj3(30);
	std::cout << obj3;
	MyClass obj4 = obj + obj2 + obj3; // 오보로드~ 꾸워어ㅜㅇ엉
	MyClass obj5 = obj.operator+(obj2.operator+(obj3));
	std::cout << obj4;
	std::cout << obj5;
	return 0;
}