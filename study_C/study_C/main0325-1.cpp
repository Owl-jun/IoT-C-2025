/*
	�⺻ Ŭ������ �����ϴ� lvalue�� �Ļ��� Ŭ������ ���� ������ ��ȯ
	��۰��迡�� �����ϰ� ����ȯ�� �����Ѵ�.
*/

#include <iostream>

class Super {
public:
	int n1, n2;
};

class Sub : public Super {
public:
	int n3, n4;
};

class Sub2 : public Sub {
public:
	int n5, n6;
};

int main()
{
	Super* pSuper;
	Sub* pSub;
	Sub2* pSub2;

	Sub2 obj{};

	pSub2 = dynamic_cast<Sub2*>(&obj);		
	pSub = dynamic_cast<Sub*>(pSub2);		// upcasting
	pSuper = dynamic_cast<Super*>(pSub2);		
	return 0;
}