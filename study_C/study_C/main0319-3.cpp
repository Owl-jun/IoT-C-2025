/*
*/
#include <iostream>

class AClass {
public:
	static int a_i;
private:
	int n1;
	int n2;
public:
	void setData(int _n1, int _n2) { n1 = _n1; n2 = _n2; }
	void getData() { 
		std::cout << "나는 AClass의 " << a_i++ << "번 인스턴스 이옵니다." << std::endl;
		std::cout << "n1 : " << n1 << " n2 : " << n2 << std::endl; 
	}
	AClass() {}
	AClass(int _n1, int _n2)
		: n1(_n1)
		, n2(_n2)
	{}
};

int AClass::a_i = 0;

int main()
{	
	AClass A1;
	A1.setData(10, 20);
	A1.getData();
	AClass A2;
	A1.setData(20, 30);
	A1.getData();
	return 0;
}