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
	
	printf("����: %d\n", pS->kor);
	printf("����: %d\n", pS->eng);
	printf("����: %d\n", (*pS).mat);

	return 0;
}
