#include <stdio.h>

int main()
{
	char str[100] = "orange";
	char* pS = &"orange";

	printf("%p\n", str);
	printf("%p\n", pS);
	printf("%s\n", "orange");
	printf("%p\n", "orange");
	printf("%c\n", "orange"[3]);

	return 0;
}