#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("메모리 할당 실패");
		exit(1);
	}
	printf("할당 성공");
	free(pi);
	
	return 0;
}