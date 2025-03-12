#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	// -------------------------------------------------
	{	// 배열
		int arr[5] = { 1,2,3,4,5 };
		for (int i = 0; i < sizeof(arr) / sizeof(int); ++i)
		{
			printf("%d\n", arr[i]);
		}
	}	
	// -------------------------------------------------

	// -------------------------------------------------
	{	// 상수
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
	{	// 입력 - scanf()
		int inputVal;
		printf("정수 입력 :");
		int sCount = scanf("%d", &inputVal);	// scanf 는 에러없이 입력받은 개수를 반환함, 이 경우 return 1
		printf("%d\n", sCount);
		printf("%d\n", inputVal);
		int inA , inB;
		printf("두개 입력 :");
		int sCount2 = scanf_s("%d %d", &inA, &inB);
		printf("%d\n", sCount2);
		printf("%d,%d \n", inA, inB);
	}
	// -------------------------------------------------

	// -------------------------------------------------
	{	// scanf 2
		char str[20];
		/*printf("이름을 입력하세요: ");
		scanf_s("%s", str, sizeof(str));
		printf("이름 : %s\n", str);
		printf("나이를 입력하세요: ");*/
		int age;
		/*scanf_s("%d", &age);
		printf("나이 : %d\n", age);*/

		printf("나이를 입력하이소\n");
		scanf_s("%d", &age);
		printf("이름도 입력하이소\n");
		scanf_s("%s", str, sizeof(str));

		printf("나이 : %d , 이름 : %s", age, str);
	}
	// -------------------------------------------------

	return 0;
}
