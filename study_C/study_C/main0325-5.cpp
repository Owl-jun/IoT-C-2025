/*
	reinterptet_cast
	포인터->포인터, 포인터->변수, 변수->포인터로하는 주로 포인터관련 연산자.
*/
#include <iostream>

int main()
{
	int* ip = new int{ 10 };
	long lg = reinterpret_cast<long>(ip);
	unsigned int ui = reinterpret_cast<int>(ip);
	printf("ip : %u, lg : %u, ui : %u\n", *ip, lg, ui);
	delete ip;
	return 0;
}