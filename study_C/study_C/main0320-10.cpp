#include <iostream>

class StaticTest {
	static int static_n;
public:
	int n;
	StaticTest();
	void print();
};

int StaticTest::static_n = 0;

StaticTest::StaticTest()
	: n(20)
{
}

void StaticTest::print() {
	std::cout << static_n++ << std::endl;
}

int main()
{
	StaticTest s;
	s.print();
	StaticTest s2;
	s2.print();
	s.print();
	s.print();
	s.print();

	return 0;
}