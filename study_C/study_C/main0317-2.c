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
        printf("�����ȣ ���� (+,-,*,/,����:q)\n");
        scanf_s(" %c", &oper, sizeof(oper));

        if (oper == 'q')
        {
            printf("���α׷� ����\n");
            break;
        }

        printf("������ ��ȣ : %c , ������ ������ �� �� �Է��Ͻÿ�.\n", oper);
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
            printf("�߸��� �����Դϴ�.\n");
            break;
        }
    }
    return 0;
}

void func(int(*pFunc)(int, int))
{
    printf("func ����: ");
    int result = pFunc(n1, n2);
    printf("���� ���: %d\n", result);
}

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return (b == 0) ? 0 : a / b; }
