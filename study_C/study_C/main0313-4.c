/*
	pointer - 주소를 가르킴
	포인터 변수 - 주소를 저장할 수 있는 변수
*/

#include <stdio.h>

int main() 
{
	int num = 100;

	printf("num의 주소: %p\n", &num);
	printf("num의 값: %d\n", num);
	int* p = &num;
	printf("p가 가르키고있는 주소: %p\n", p);
	*p = 30;
	printf("num의 값: %d\n", *p);
	return 0;
}