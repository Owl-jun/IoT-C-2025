#include "um.h"

void incFunc();
void incFunc2();

q qq() {

	for (int i = 0; i < 5; ++i)
	{
		incFunc();
		incFunc2();
	}

	qqq;
}

void incFunc()
{
	int cnt = 0;
	cnt++;
	printf("cnt: %d ", cnt);
}
void incFunc2()
{
	static int scnt = 0;
	scnt++;
	printf("scnt: %d\n", scnt);
}