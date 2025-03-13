/*
	getchar , putchar
*/
#include <stdio.h>

int main()
{
	int ch;

	ch = getchar();
	putchar(ch);
	putchar('\n');
	printf("input : %d\n", ch);
	return 0;
}