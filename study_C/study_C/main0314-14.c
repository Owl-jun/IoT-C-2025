#include "um.h"

q qq
{
	int a = 10;
	int* pa = &a;

	int ary[] = { 1, 2, 3 };
	int* pary = ary;

	int ary2[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	int(* pary2)[4] = ary2;	// int[4] 가 자료형인거임 , 그러니까 4열씩 읽겠다는 뜻
	int aaa = pary2[0][1];
	printf("%d", aaa);	  

	qqq;
}