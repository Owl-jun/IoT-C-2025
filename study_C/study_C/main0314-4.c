#include "um.h"
/*
	puts, fputs - ���� ����Լ�
	strcpy - ���ڿ� ���� �Լ�
*/

void my_strcpy(char*, int, char*);

int main()
{
	char str[10] = "orange";
	char str2[50] = "ara";
	puts(str);
	puts(str2);
	//my_strcpy(str,sizeof(str), str2);
	strncpy(&str[2], str2, 3);
	
	puts(str);
	puts(str2);
	return 0;
}

void my_strcpy(char* target,int sizet, char* copy)
{
	int idx = 0; int lenCopy = 0;
	// ���� ���ڿ��� ���� üũ
	while (copy[lenCopy] != '\0') { ++lenCopy; } 
	// �迭 �ε��� �ʰ� ���� ó��
	if (sizet-1 < lenCopy) { puts("�����ϱ⿡ ����� ������ �����ϴ�! �迭�� ũ�⸦ �÷��ּ���."); return; }
	else { for (; idx < sizet; ++idx) target[idx] = copy[idx]; }
}
