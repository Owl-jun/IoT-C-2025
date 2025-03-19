#include <iostream>

using namespace std;
int main() 
{
	int num = 3;			// 복사 초기화
	int num2(10);			// 직접 초기화

	int num3{ 300 };		// 중괄호 직접 초기화
	int num4 = { 3000 };	// 중괄호 복사 초기화

	int x = 3.14;
	int x2{ 3.14 };
	cout << num << " " << num2 << " " << num3 << " " << num4 << " " << x << x2;
	return 0;
}

