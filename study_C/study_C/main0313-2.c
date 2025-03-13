#include <stdio.h>

int main()
{
	int ary[] = { 1,2,3 };

	printf("배열의 전체크기: %u\n",sizeof(ary));
	printf("배열 한 칸의 크기: %u\n", sizeof(ary[0]));
	printf("배열 방의 개수: %u\n", sizeof(ary)/sizeof(ary[0]));
	printf("배열 이름 : %p\n", ary);
	printf("배열 첫번째 방 주소 : %p\n", &ary[0]);
	printf("배열 두번째 방 주소 : %p\n", ary + 1);
	printf("배열 두번째 방 주소 : %p\n", &ary[1]);

	return 0;
}