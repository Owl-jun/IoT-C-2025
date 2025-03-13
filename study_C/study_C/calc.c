#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void clear();

int main()
{
	int flag = 1;	// ���� flag
	while(flag)
	{ 
		int inA, inB, result;
		char oper;

		// �Է¹��� ����
		printf("���� ���α׷��Դϴ�. �����Ϸ��� ENTER Ű �Է�.\n");
		clear();

		printf("�ΰ��� ������ �Է��ϼ���.\n");
		scanf_s("%d%d", &inA, &inB);

		printf("�����ڸ� �Է��ϼ���.(+,-,*,/) ���� : q \n");
		clear();
		scanf("%c", &oper);

		switch (oper)
		{
		case '+':
			result = sum(inA, inB);
			printf("����� %d : \n", result);
			break;
		case '-':
			result = div(inA, inB);
			printf("����� %d : \n", result);
			break;
		case '*':
			result = mul(inA, inB);
			printf("����� %d : \n", result);
			break;
		case '/':
			if (inB != 0)
			{
				result = div(inA, inB);
				printf("����� %.1f : \n", (float)result);
			}
			else { printf("0���� ������ �����ϴ�.\n"); }
			break;
		case 'q':
			flag = 0;
			printf("���α׷��� ���� �մϴ�.\n");
			break;
		default:
			printf("�߸��� �Է� �Դϴ�.\n");
			break;
		}
	}
	
}

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
void clear()
{
	while (1) { if (getchar() != "\n") break; }
}
