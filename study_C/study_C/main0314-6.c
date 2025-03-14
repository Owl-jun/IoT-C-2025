#include "um.h"

int my_strcmp(char*, char*);

int main()
{
	char str[100] = "app";
	char str2[100] = "apple";
	if (my_strcmp(str, str2) == -1) puts("������ �� �켱���� �Դϴ�.");
	else if (my_strcmp(str, str2) == 1) puts("������ �� �켱���� �Դϴ�.");
	else if (my_strcmp(str, str2) == 0) puts("���� �����ϴ�.");

	return 0;
}

// �������� ���� ���Լ�
int my_strcmp(char* A, char* B)
{
	// �� str�� ���� ���ϱ�
	int A_len = strlen(A);
	int B_len = strlen(B);

	// ���׿�����. ���� ���� �� �� ª������ range ������ ���
	int range = A_len > B_len ? B_len : A_len;

	// ª������ �������� �ݺ��� ��ȸ
	// ���������� �����̴ϱ� �� �������� ����
	for (int i = 0; i < range; ++i)
	{
		if (A[i] < B[i]) { return -1; }
		else if (A[i] > B[i]) { return 1; }
		else { continue; }
	}
	// for ������ return���� ������ �ȉ�ٸ� ª��str��ŭ�� �������� �� str�� ���ٴ� ��
	// �׷��ٸ� ���������� ���� �������� �Ǵ�.
	if (A_len < B_len) { return -1; }
	else if (A_len > B_len) { return 1; }
	// ������ �Ȱɸ��� ��¥ ���� �Ȱ�������
	else { return 0; }
}