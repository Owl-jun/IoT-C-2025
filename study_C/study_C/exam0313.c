#include <stdio.h>

int main() {

	float scoreArr[5] = {0.f,};
	int size = (sizeof(scoreArr) / sizeof(scoreArr[0]));
	printf("%d���� �л� ������ �Է��ϼ���. \n", size);
	for (int i = 0; i < size; ++i)
	{
		scanf_s("%f", &scoreArr[i]);
		printf("%d �� �л� ���� �Է� �Ϸ� : %.2f\n", i + 1, scoreArr[i]);
	}
	
	float sumScore = 0;
	for (int j = 0; j < size; ++j)
	{
		sumScore += scoreArr[j];
	}
	printf("��� �л��� ���� �հ�� %.2f �Դϴ�.\n", sumScore);

	float avgScore = (float)sumScore / size;
	printf("��� �л��� ���� ����� %.2f �Դϴ�.\n", avgScore);

	return 0;
}