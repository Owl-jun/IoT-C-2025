#include "um.h"

void printAry(char**, int);

q qq
{
	char* ary[] = {"mango","apple", "banana"};
	
	printAry(ary,3);
	
	qqq;
}

void printAry(char** ary, int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%s", *(ary + i));
	}
}
