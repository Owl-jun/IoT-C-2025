/*
	연산자 오버로딩 (다중정의)
*/
#include <iostream>
#include <assert.h>

class MyClass {
private:
	int m_a, m_b;
	// const char* m_name;
	friend std::ostream& operator<<(std::ostream& os, const MyClass& mc);
public:
	MyClass(int _a = 0 , int _b = 0 , const char* _name = nullptr)
		: m_a(_a)
		, m_b(_b)
		/*, m_name(_name)*/
	{
	}
	MyClass& operator = (const MyClass& _other)
	{
		m_a = _other.m_a;
		m_b = _other.m_b;
		// m_name = _other.m_name;
		return *this;
	}
	bool operator == (const MyClass& _other) { return (m_a == _other.m_a) && (m_b == _other.m_b); }
	MyClass operator + (const MyClass& _other) { return MyClass(m_a + _other.m_a , m_b + _other.m_b); }
	MyClass operator - (const MyClass& _other) { return MyClass(m_a - _other.m_a , m_b - _other.m_b); }
	MyClass operator * (const MyClass& _other) { return MyClass(m_a * _other.m_a , m_b * _other.m_b); }
	MyClass operator / (const MyClass& _other) { 
		if (_other.m_a != 0 && _other.m_b != 0)
		{ 
			return MyClass(m_a / _other.m_a , m_b / _other.m_b); 
		}
		else {
			assert(nullptr);
		}
	}
};

std::ostream& operator<<(std::ostream& os, const MyClass& mc) {
	os << mc.m_a << ", " << mc.m_b << std::endl;
	return os;
}

int main()
{
	MyClass obj{ 10, 20 };
	MyClass obj2{ 30, 10 };

	MyClass obj3 = obj + obj2;
	MyClass div = obj / obj2;
	
	std::cout << obj3;
	std::cout << div;
	
	return 0;
}