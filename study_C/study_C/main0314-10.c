#include "um.h"

q qq{

	char fruit[5][10];
	for (int i = 0; i < 5; ++i)
	{
		scanf_s("%s", fruit[i], sizeof(fruit[0]));
	}
	for (int i = 0; i < 5; ++i) { printf("%s", fruit[i]); }

	qqq;
}

