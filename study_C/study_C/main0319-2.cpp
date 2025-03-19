#include <iostream>

using namespace std;

// ÂÁ. ÂÁ.. Å¬·¡½º¾ßÀ×
class A {
	static int ai; 
public:
	int num;
	void print() {
		cout << "³ª´Â A Å¬·¡½º¾ßÀ× numÀº : " << num << " ÀÌ¾ßÀ×" << endl;
	}
	A() : num(ai++)
	{
	}
};

int A::ai = 0;

int main() {
	A a1;
	A a2;
	A a3;

	a1.print();
	a2.print();
	a3.print();

	return 0;
}
