/*
	pointer - �ּҸ� ����Ŵ
	������ ���� - �ּҸ� ������ �� �ִ� ����
*/

#include <stdio.h>

int main() 
{
	int num = 100;

	printf("num�� �ּ�: %p\n", &num);
	printf("num�� ��: %d\n", num);
	int* p = &num;
	printf("p�� ����Ű���ִ� �ּ�: %p\n", p);
	*p = 30;
	printf("num�� ��: %d\n", *p);
	return 0;
}