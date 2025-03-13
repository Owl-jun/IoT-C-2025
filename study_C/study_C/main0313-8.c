/*
*/
#include <stdio.h>

void printAry(int* _ary, int size);
void inputAry(int* _ary, int size, int idx, int val);
int main()
{
	int ary[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, };
	int size = sizeof(ary) / sizeof(ary[0]);
	inputAry(ary,size,3,10);
	printAry(ary,size);

	return 0;
}

void printAry(int* _ary, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("ary[%d] : %d\n", i, _ary[i]);
	}
}

void inputAry(int* _ary, int size, int idx, int val)
{
	if (idx < size)
	{
		*(_ary + idx) = val;
	}
}

