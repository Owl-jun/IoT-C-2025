#include "um.h"

q qq
{

	int n = 100;
	int* pN;
	int** ppN;

	pN = &n;	// 변수 n의 주소를 저장
	ppN = &pN;	// 포인터 변수의 주소를 저장 그냥 포인터를 가르키는 포인터임

	//printf("%d", **ppN);

	int a = 309;
	int* pA = &a;
	int** ppA = &pA;
	printf("a: %d\t a의 주소 : %p \n", a, &a);
	printf("pA역참조: %d\t\t\t pA가 가르키고있는 주소 : %p\t pA가 거주중인 주소 : %p \n", *pA, pA, &pA);
	printf("ppA역참조: %p\t ppA가 가르키고있는 주소 : %p\t ppA가 거주중인 주소 : %p \n", *ppA, ppA, &ppA);
	
	qqq;
}