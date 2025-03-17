#include <stdio.h>
#include <stdlib.h>
// 메인 스땍
int main()
{
	char** pps = (char**)malloc(sizeof(char*)*5);
	if (pps == NULL)
	{
		printf("메모리 할당 실패");
		exit(1);
	}

	char str[100];

	for (int i = 0; i < 5; ++i)
	{
		printf("문자열을 입력하세요 >> ");
		fgets(str,100,stdin);

		pps[i] = (char*)malloc(strlen(str) + 1);

		strcpy(pps[i], str);
	}

	int count = 0;
	while (pps[count] != NULL) { fputs(pps[count++], stdout); }
	for (int i = 0; i < 5; ++i) { free(pps[i]); }
	free(pps);

	return 0;
}
