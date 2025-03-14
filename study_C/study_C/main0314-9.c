#include "um.h"

q qq() {
	int arr[3][4] = {0,};
	int num; int avg; int score = 0;
	for (int i = 0; i < 3; ++i)
	{
		puts("학생 번호 입력");
		scanf_s(" %d", &num );
		arr[i][0] = num;
		for (int j = 1; j < 4; ++j)
		{
			printf("%d번 과목 점수 입력 : \n", j);
			scanf_s("%d", &score);
			arr[i][j] = score;
		}
	}
	for (int k = 0; k < 3; ++k)
	{
		int sum = 0;
		for (int l = 1; l < 4; ++l)
		{
			sum += arr[k][l];
		}
		avg = sum / 3;
		printf(" %d번 학생 총점 : %d\n", arr[k][0], sum);
		printf(" %d번 학생 평균 : %d\n", arr[k][0], avg);
	}
	qqq;
}