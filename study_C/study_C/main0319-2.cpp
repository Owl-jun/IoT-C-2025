#include <iostream>

using namespace std;

// ��. ��.. Ŭ��������
class A {
	static int ai; 
public:
	int num;
	void print() {
		cout << "���� A Ŭ�������� num�� : " << num << " �̾���" << endl;
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
