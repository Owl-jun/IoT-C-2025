#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("�޸� �Ҵ� ����");
		exit(1);
	}
	printf("�Ҵ� ����");
	free(pi);
	
	return 0;
}