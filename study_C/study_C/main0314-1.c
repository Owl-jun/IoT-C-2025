#include <stdio.h>

typedef int ���;
typedef char ��;
typedef float ����;
#define ��  printf
#define ����̸���	"%s"
#define ���	if
#define ��		else
void myStrInput(��*, ���);

int main()
{
	�� str[100];
	myStrInput(str,sizeof(str));
	��("�Է��� ���ڿ�:");
	��(����̸���, str);

	return 0;
}

void myStrInput(��* str, ��� size)
{
	��� count = 0;
	while(count < size-1)
	{
		�� temp = getchar();
		���(temp == '\n') { break; }
		��{ *(str + count) =temp; }
		++count;
	}
	*(str + count) = '\0';
}