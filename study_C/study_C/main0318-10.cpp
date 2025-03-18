
#include <iostream>

int& func(int& ref) {
	ref++;
	return ref;
}
int main()
{
	int n = 10;
	int& ref2 = func(n);


	ref2;
	return 0;
}