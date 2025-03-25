#include <iostream>

// MyClass 382번째 설계
class MyClass {
private:
	int num;
public:
	MyClass(int n) : num(n) {
		std::cout << num << " constructor" << std::endl;
	}
	~MyClass() { std::cout << num << " dest" << std::endl; }
	void setData(int n) { num = n; }
};

int main()
{
	MyClass* ptr = &MyClass{ 10 };
	//MyClass& obj = MyClass{ 20 };
	MyClass&& obj2 = std::move(MyClass{ 20 });
	return 0;
}