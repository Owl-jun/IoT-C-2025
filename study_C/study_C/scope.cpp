#include <iostream>
#include "scope.h"

A::A(int fa) {
	a = fa;
}
int main()
{
	A a(55);
	A b = A::A(3);
	a.AInfo();
	b.AInfo();
	return 0;
}