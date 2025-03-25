/*
	reinterptet_cast
	������->������, ������->����, ����->�����ͷ��ϴ� �ַ� �����Ͱ��� ������.
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