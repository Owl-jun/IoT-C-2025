#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	// -------------------------------------------------
	{	// �迭
		int arr[5] = { 1,2,3,4,5 };
		for (int i = 0; i < sizeof(arr) / sizeof(int); ++i)
		{
			printf("%d\n", arr[i]);
		}
	}	
	// -------------------------------------------------

	// -------------------------------------------------
	{	// ���
		int r = 10;
		volatile const double PI = 3.14159;
		double cf = 2 * PI * r;
		printf("%.2lf\n", cf);
		
		double* dp = &PI;
		*dp = 6.0;
		printf("%.2lf", PI);
	}	
	// -------------------------------------------------

	// -------------------------------------------------
	{	// �Է� - scanf()
		int inputVal;
		printf("���� �Է� :");
		int sCount = scanf("%d", &inputVal);	// scanf �� �������� �Է¹��� ������ ��ȯ��, �� ��� return 1
		printf("%d\n", sCount);
		printf("%d\n", inputVal);
		int inA , inB;
		printf("�ΰ� �Է� :");
		int sCount2 = scanf_s("%d %d", &inA, &inB);
		printf("%d\n", sCount2);
		printf("%d,%d \n", inA, inB);
	}
	// -------------------------------------------------

	// -------------------------------------------------
	{	// scanf 2
		char str[20];
		/*printf("�̸��� �Է��ϼ���: ");
		scanf_s("%s", str, sizeof(str));
		printf("�̸� : %s\n", str);
		printf("���̸� �Է��ϼ���: ");*/
		int age;
		/*scanf_s("%d", &age);
		printf("���� : %d\n", age);*/

		printf("���̸� �Է����̼�\n");
		scanf_s("%d", &age);
		printf("�̸��� �Է����̼�\n");
		scanf_s("%s", str, sizeof(str));

		printf("���� : %d , �̸� : %s", age, str);
	}
	// -------------------------------------------------

	return 0;
}
