#include "um.h"

int main()
{
	어 str[100];
	printf("문자열 입력 >> ");
	scanf_s("%s", str, sizeof(str));
	printf("문자열 : %s\n", str);
	getchar();

	printf("공백을 포함한 입력 >> ");
	gets(str);
	printf("입력 문자열: %s\n", str);

	printf("공백을 포함한 입력 >> ");
	fgets(str, sizeof(str), stdin);
	printf("입력 문자열: %s\n", str);

	return 0;
}