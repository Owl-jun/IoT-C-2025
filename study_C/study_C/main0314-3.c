#include "um.h"

int main()
{
	�� str[100];
	printf("���ڿ� �Է� >> ");
	scanf_s("%s", str, sizeof(str));
	printf("���ڿ� : %s\n", str);
	getchar();

	printf("������ ������ �Է� >> ");
	gets(str);
	printf("�Է� ���ڿ�: %s\n", str);

	printf("������ ������ �Է� >> ");
	fgets(str, sizeof(str), stdin);
	printf("�Է� ���ڿ�: %s\n", str);

	return 0;
}