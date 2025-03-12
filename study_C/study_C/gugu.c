#include <stdio.h>

int main()
{
	for (int j = 1; j < 10; ++j)
	{
		printf("%d 단 : ", j);
		for (int k = 1; k < 10; ++k)
		{
			printf("%d x %d = %d ", j, k, j * k);
		}
		printf("\n");
	}
	
	int input;
	printf("몇단을 출력할까요?");
	scanf_s("%d", &input);
	printf("%d 단 출력\n", input);
	for (int i = 1; i < 10; ++i)
	{
		printf("%d x %d = %d\n", input, i, input * i);
	}

	return 0;
}


