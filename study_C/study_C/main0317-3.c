#include <stdio.h>

int main()
{
	int n = 10;
	double db = 3.14;
	void* p;
	p = &n;
	printf("*p : %d\n", *((int*)p));

	return 0;
}