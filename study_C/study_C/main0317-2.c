#include <stdio.h>

int n1, n2;
int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
void func(int(*pFunc)(int, int));

int main()
{
    while (1)
    {
        char oper;
        printf("연산기호 선택 (+,-,*,/,종료:q)\n");
        scanf_s(" %c", &oper, sizeof(oper));

        if (oper == 'q')
        {
            printf("프로그램 종료\n");
            break;
        }

        printf("선택한 기호 : %c , 연산할 정수를 두 개 입력하시오.\n", oper);
        scanf_s(" %d%d", &n1, &n2); 

        switch (oper)
        {
        case '+':
            func(sum);
            break;
        case '-':
            func(sub);
            break;
        case '*':
            func(mul);
            break;
        case '/':
            func(div);
            break;
        default:
            printf("잘못된 연산입니다.\n");
            break;
        }
    }
    return 0;
}

void func(int(*pFunc)(int, int))
{
    printf("func 실행: ");
    int result = pFunc(n1, n2);
    printf("연산 결과: %d\n", result);
}

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return (b == 0) ? 0 : a / b; }
