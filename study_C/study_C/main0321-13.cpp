/*
	단항 연산자 ++ --
*/

#include <iostream>

class Money {
private:
	int money;
public:
	Money(int m = 0)
		: money(m)
	{ }
	int operator()() {
		return money;
	}
	void operator()(int m) {
		money += m;
	}
	void operator++()
	{
		++money;
	}
	int operator++(int)
	{
		int temp = money;
		++money;
		return temp;
	}
};

int main() {
	Money m;
	m(50);
	++m;
	std::cout << m++;
	std::cout << m();

	return 0;
}