#include "um.h"
/*

������ �迭 (char *argv[]) �� ���� ���(argv[i])�� �ٸ� ���ڿ��� ����ų �� �ִ� �������� �迭
�迭 ������ (char (*argv)[]) �� ������ 2���� �迭�� �ٷ� �� ���
���� 2���� ���� �迭 �� ���� ������ (char **argv) ���

*/
q main(int argc, char* argv[])
{
	int i = 0;
	printf("���� ���� : %d", i);
	printf("���� ��: %s", *(argv+i));
	

	return 0;
}