/* 
	�Լ� ���ø� : ���� �ڷ����� ���ø� ���ڷ� �޾� �Լ� ���ο��� Ȱ���Ѵ�.
*/
#include <iostream>

template <typename T>
T Add(T a, T b) {
	return a + b;
}

int main()
{
	std::cout << Add<int>(30, 20) << std::endl;
	std::cout << Add<float>(35.1f, 20.f) << std::endl;
	std::cout << Add<double>(3.1, 2.3) << std::endl;
	return 0;
}