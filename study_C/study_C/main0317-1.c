#include "um.h"

q main(int argc, char* argv[])
{
	int i = 0;
	for (; i < argc; ++i)
	{
		printf("���� ���� : %d, ���� ��: %s", i, *(argv+i));
	}

	return 0;
}