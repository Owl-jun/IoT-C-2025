#include <stdio.h>
#include <stdlib.h>
int main() 
{
	// --------------------------------------------------
	{	// switch case ���� �˾ƺ���.
		{	
			int flag = 1;
			while (flag)
			{
				int input;
				printf("���� ã�� ���� ������ 1 ~ 5\n");
				scanf_s("%d", &input);
				
				switch (input)
				{
					case 1:
						printf("�۽��ϴ�\n");
						break;
					case 2:
						printf("�۽��ϴ�\n");
						break;
					case 3:
						printf("����\n");
						flag = 0;
						break;
					default:
						printf("Ů�ϴ�\n");
						break;
				}
			}
		}
	}
	// --------------------------------------------------
	return 0;
}