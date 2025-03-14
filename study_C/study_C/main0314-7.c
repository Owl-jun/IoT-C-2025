#include "um.h"

int cnt;
void incFunc();

int main()
{
	incFunc();
	printf("cnt: %d\n", cnt);
	incFunc();
	printf("cnt: %d\n", cnt);
	incFunc();
	printf("cnt: %d\n", cnt);
	incFunc();
	printf("cnt: %d\n", cnt);
	incFunc();
	printf("cnt: %d\n", cnt);

	return 0;
}

void incFunc()
{
	cnt++;
}