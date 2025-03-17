#include "um.h"
/*

포인터 배열 (char *argv[]) → 개별 요소(argv[i])가 다른 문자열을 가리킬 수 있는 유동적인 배열
배열 포인터 (char (*argv)[]) → 고정된 2차원 배열을 다룰 때 사용
동적 2차원 가변 배열 → 이중 포인터 (char **argv) 사용

*/
q main(int argc, char* argv[])
{
	int i = 0;
	printf("전달 갯수 : %d", i);
	printf("전달 값: %s", *(argv+i));
	

	return 0;
}