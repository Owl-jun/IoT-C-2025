#include <iostream>

int& func(int anum)
{
	anum++;
	return anum;
}

int main()
{
	int num = 10;
	int& res = func(num);

	res;
	return 0;
}