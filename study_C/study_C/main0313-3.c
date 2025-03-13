#include <stdio.h>

int main() {

	char str[100] = "banana";
	char str2[6] = "apple";
	char str3[10] = { 'o','r','a','n','g','e', };
	char str4[3];

	str4[0] = 'a'; str4[1] = 'b'; str4[2] = '\0';

	printf("str : %s\n", str);
	printf("str2 : %s\n", str2);
	printf("str3 : %s\n", str3);
	printf("str[77] : %c\n", str[77]);
	printf("*(str2+1) : %c\n", str2[1]);
	printf("%s\n", str4);

	return 0;
}