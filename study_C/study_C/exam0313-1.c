#include <stdio.h>

// ---------

#define CHANGE ('a' - 'A')
void change_char(char* _val);

int main()
{
	char str[100];
	while (1)
	{
		printf("��ҹ��� ��ȯ ���α׷��Դϴ�.\n");
		printf("��ȯ�� ���ڿ��� �Է����ּ���. *�ִ� 100��* (0�� �Է��ϸ� ����): \n");
		scanf_s("%s", str, sizeof(str));
		// ���α׷� ��������
		if (str[0] == '0') { printf("���α׷� ����.\n"); break;}
		// ���ڿ� ��ȸ
		for (int i = 0; i < sizeof(str); ++i)
		{
			if (str[i] == '\0') { break; }
			change_char(&str[i]);	// ���ڿ� �ϳ��� �ٲ������
		}
		
		printf("��ȯ�� ���� : %s\n", str);
	}
	return 0;
}

void change_char(char* _val)
{
	if ((*_val >= 'A') && (*_val <= 'Z')) { *_val += CHANGE; }
	else if ((*_val >= 'a') && (*_val <= 'z')) { *_val -= CHANGE; }
	else if (*_val == ' ') {}
	else { printf("�߸��� �Է��Դϴ�."); }
}
