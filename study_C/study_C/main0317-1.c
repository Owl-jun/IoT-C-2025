#include "um.h"

q main(int argc, char* argv[])
{
	int i = 0;
	for (; i < argc; ++i)
	{
		printf("전달 갯수 : %d, 전달 값: %s", i, *(argv+i));
	}

	return 0;
}