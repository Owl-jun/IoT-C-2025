#include "um.h"

int main()
{
	char str[100] = "apple";
	int i = strlen(str);	// 사람이 보기에 5글자잖슴
	printf("str 의 길이 : %d\n", i);

	char str1[100] = "app";
	char str2[10] = "le";

	strcat(str1, str2);
	puts(str1);
	puts(str2);

	strcat(str1, " is good");
	puts(str1);
	strncat(str1, " fruit zzz", 6);
	puts(str1);

	return 0;
}