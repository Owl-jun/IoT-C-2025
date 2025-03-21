#include <iostream>

template <typename T>
T func(T a, T b)
{
	std::cout << "T" << std::endl;
	return a + b;
}
template <>							// 템플릿 특수화 , 일정 타입만 처리하고싶을때
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