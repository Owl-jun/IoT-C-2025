#include <stdio.h>

int main()
{
	for (int j = 1; j < 10; ++j)
	{
		printf("%d �� : ", j);
		for (int k = 1; k < 10; ++k)
		{
			printf("%d x %d = %d ", j, k, j * k);
		}
		printf("\n");
	}
	
	int input;
	printf("����� ����ұ��?");
	scanf_s("%d", &input);
	printf("%d �� ���\n", input);
	for (int i = 1; i < 10; ++i)
	{
		printf("%d x %d = %d\n", input, i, input * i);
	}

	return 0;
}


