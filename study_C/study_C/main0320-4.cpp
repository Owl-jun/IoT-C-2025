/*
	��ȯ ������
	: ����ȯ�� �������ִ� ������
	: Ÿ�� ��ȯ�� �ڵ����� �Ͼ���� ���ϴ�.
	: �Ű����ڰ� �Ѱ��� ������ �������̴�.
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
	explicit MyClass(int _val)  // explicit ������ ��ȯ ����
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