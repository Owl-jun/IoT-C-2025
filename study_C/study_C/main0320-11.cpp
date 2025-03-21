#include <iostream>

class AAA {
private:
	static int static_a;
	int n;
public:
	AAA(int n);
	static void setStatic_a(int b);
	void print();
};

int AAA::static_a = 100;

AAA::AAA(int n)
	: n(n)
{}

void AAA::setStatic_a(int b)
{
	static_a = b;
}

void AAA::print()
{
	printf("static_a : %d , b : %d\n", static_a, n);
}

int main()
{
	AAA a1(5), a2(10);
	a1.print();
	a2.print();
	AAA::setStatic_a(3);
	a1.print();
	a2.print();
	return 0;
}