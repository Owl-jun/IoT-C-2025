#include <iostream>

class CMY
{
	int a;
	int b;
public:

	friend std::ostream& operator<<(std::ostream& os, const CMY& p);

	CMY& operator +(CMY& _other)
	{
		this->a += _other.a;
		this->b += _other.b;
		return *this;
	}

	CMY(int _a, int _b)
		: a(_a)
		, b(_b)
	{}
	~CMY() {}
};

int main()
{
	CMY n1(1, 2);
	CMY n2(2, 3);
	std::cout << n1;
	n1 + n2;
	std::cout << n2;
	
	n1;

	return 0;
}

std::ostream& operator<<(std::ostream& os, const CMY& p)
{
	std::cout << "a : " << p.a << " " << "b : " << p.b << std::endl;
	return os;
} 
