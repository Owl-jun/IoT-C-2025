#include <stdio.h>

int main()
{
	char ch1;
	char ch2 = 'C';
	if ((ch2 >= 'A') && (ch2 <= 'Z'))
	{
		ch1 = ch2 + ('a'-'A');
	}
	printf("대문자: %c \t", ch2);
	printf("소문자: %c \n", ch1);
	return 0;
}