/*
	변환 생성자
	: 형변환을 지정해주는 생성자
	: 타입 변환이 자동으로 일어남으로 편리하다.
	: 매개인자가 한개만 가지는 생성자이다.
*/

#include <iostream>

class MyClass {
private:
	int val;
public:
	void print() {
		std::cout << val;
	}
public:
	MyClass() {}
	explicit MyClass(int _val)  // explicit 묵시적 변환 방지
			: val(_val)
	{}
	~MyClass()
	{}
};

int main()
{
	MyClass obj(3);
	//MyClass obj = 3;
	return 0;
}