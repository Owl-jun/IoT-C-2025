#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
void clear();

int main()
{
	int flag = 1;	// 실행 flag
	while(flag)
	{ 
		int inA, inB, result;
		char oper;

		// 입력버퍼 비우기
		printf("계산기 프로그램입니다. 시작하려면 ENTER 키 입력.\n");
		clear();

		printf("두개의 정수를 입력하세요.\n");
		scanf_s("%d%d", &inA, &inB);

		printf("연산자를 입력하세요.(+,-,*,/) 종료 : q \n");
		clear();
		scanf("%c", &oper);

		switch (oper)
		{
		case '+':
			result = sum(inA, inB);
			printf("계산결과 %d : \n", result);
			break;
		case '-':
			result = div(inA, inB);
			printf("계산결과 %d : \n", result);
			break;
		case '*':
			result = mul(inA, inB);
			printf("계산결과 %d : \n", result);
			break;
		case '/':
			if (inB != 0)
			{
				result = div(inA, inB);
				printf("계산결과 %.1f : \n", (float)result);
			}
			else { printf("0으로 나눌수 없습니다.\n"); }
			break;
		case 'q':
			flag = 0;
			printf("프로그램을 종료 합니다.\n");
			break;
		default:
			printf("잘못된 입력 입니다.\n");
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
