#include "um.h"

q qq
{

	int n = 100;
	int* pN;
	int** ppN;

	pN = &n;	// ���� n�� �ּҸ� ����
	ppN = &pN;	// ������ ������ �ּҸ� ���� �׳� �����͸� ����Ű�� ��������

	//printf("%d", **ppN);

	int a = 309;
	int* pA = &a;
	int** ppA = &pA;
	printf("a: %d\t a�� �ּ� : %p \n", a, &a);
	printf("pA������: %d\t\t\t pA�� ����Ű���ִ� �ּ� : %p\t pA�� �������� �ּ� : %p \n", *pA, pA, &pA);
	printf("ppA������: %p\t ppA�� ����Ű���ִ� �ּ� : %p\t ppA�� �������� �ּ� : %p \n", *ppA, ppA, &ppA);
	
	qqq;
}