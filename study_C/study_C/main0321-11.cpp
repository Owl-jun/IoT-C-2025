#include <iostream>

#define CONCAT(x,y)	#x#y		// #x : ���ڿ�ȭ
#define COMB(x,y)	x ## y		// x ## y : ��ū���� ���� , ������ ��
#define SQUARE(X)	((X)*(X))	// �Լ�ȭ

int main() {
	int COMB(num, 1) = 32;
	std::cout << num1 << CONCAT(hello,cpp) << " " << SQUARE(3);
	return 0;
}