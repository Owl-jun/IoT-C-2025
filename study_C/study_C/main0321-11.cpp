#include <iostream>

#define CONCAT(x,y)	#x#y		// #x : 문자열화
#define COMB(x,y)	x ## y		// x ## y : 토큰조합 생성 , 변수명 등
#define SQUARE(X)	((X)*(X))	// 함수화

int main() {
	int COMB(num, 1) = 32;
	std::cout << num1 << CONCAT(hello,cpp) << " " << SQUARE(3);
	return 0;
}