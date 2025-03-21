#include <iostream>

template <typename T>
class CTest {
private:
	T num;
public:
	CTest(T n) : num(n) {}
	T getData() { return num; }
};

int main()
{
	CTest<int> obj(10);
	CTest<char> oc('a');
	std::cout << oc.getData();
	return 0;
}