#include <iostream>

template <typename T>
T func(T a, T b)
{
	std::cout << "T" << std::endl;
	return a + b;
}
template <>							// ���ø� Ư��ȭ , ���� Ÿ�Ը� ó���ϰ������
int func<int>(int a, int b) {
	std::cout << "<int>" << std::endl;
	return a + b;
}

int main()
{
	std::cout << func(10, 20) << std::endl;
	std::cout << func(10.1f, 2.6f) << std::endl;
	return 0;
}