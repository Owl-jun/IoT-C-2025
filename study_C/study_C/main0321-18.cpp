#include <iostream>

template <typename T, int sz>
class CTest {
private:
	T ary[sz];
public:

	T& operator[](int i) {
		if (i < 0 || i >= sz)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
		return *(ary + i);
	}
	void getData() {
		for (int i = 0; i < sz; ++i) {
			std::cout << ary[i] << std::endl;
		}
	}
};

int main()
{
	CTest<int, 10> c;
	c[0] = 20;
	c[2] = 30;
	c.getData();
	return 0;
}