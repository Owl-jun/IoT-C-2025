#include <stdio.h>

typedef struct score {
	int kor;
	int eng;
	int mat;
}Score;

int main()
{
	Score s = { 100, 80, 85 };
	Score* pS = &s;
	
	printf("국어: %d\n", pS->kor);
	printf("영어: %d\n", pS->eng);
	printf("수학: %d\n", (*pS).mat);

	return 0;
}
