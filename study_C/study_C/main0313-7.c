/*
	배열과 포인터
*/

#include <stdio.h>

int main()
{
	int ary[5];
	int* pa = ary;

	*(pa + 0) = 10;
	printf("%d", *pa);
	printf("pa: %d\n", pa);
	printf("pa + 1: %d\n", *(pa + 1));
	*(pa + 1) = 20;
	printf("*(pa+1):%d, ary[1]:%d\n", *(pa + 1), ary[1]);
	return 0;
}