#include <stdio.h>

int main() {

	float scoreArr[5] = {0.f,};
	int size = (sizeof(scoreArr) / sizeof(scoreArr[0]));
	printf("%d명의 학생 점수를 입력하세요. \n", size);
	for (int i = 0; i < size; ++i)
	{
		scanf_s("%f", &scoreArr[i]);
		printf("%d 번 학생 점수 입력 완료 : %.2f\n", i + 1, scoreArr[i]);
	}
	
	float sumScore = 0;
	for (int j = 0; j < size; ++j)
	{
		sumScore += scoreArr[j];
	}
	printf("모든 학생의 점수 합계는 %.2f 입니다.\n", sumScore);

	float avgScore = (float)sumScore / size;
	printf("모든 학생의 점수 평균은 %.2f 입니다.\n", avgScore);

	return 0;
}