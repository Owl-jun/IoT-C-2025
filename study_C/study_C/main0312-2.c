#include <stdio.h>
#include <stdlib.h>
int main() 
{
	// --------------------------------------------------
	{	// switch case 문을 알아보자.
		{	
			int flag = 1;
			while (flag)
			{
				int input;
				printf("숫자 찾기 게임 범위는 1 ~ 5\n");
				scanf_s("%d", &input);
				
				switch (input)
				{
					case 1:
						printf("작습니다\n");
						break;
					case 2:
						printf("작습니다\n");
						break;
					case 3:
						printf("빙고\n");
						flag = 0;
						break;
					default:
						printf("큽니다\n");
						break;
				}
			}
		}
	}
	// --------------------------------------------------
	return 0;
}