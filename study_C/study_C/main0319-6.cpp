#include <iostream>

using namespace std;
int main() 
{
	int num = 3;			// ���� �ʱ�ȭ
	int num2(10);			// ���� �ʱ�ȭ

	int num3{ 300 };		// �߰�ȣ ���� �ʱ�ȭ
	int num4 = { 3000 };	// �߰�ȣ ���� �ʱ�ȭ

	int x = 3.14;
	int x2{ 3.14 };
	cout << num << " " << num2 << " " << num3 << " " << num4 << " " << x << x2;
	return 0;
}

