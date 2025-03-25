/*
	기본 클래스를 참조하는 lvalue를 파생된 클래스에 대한 참조로 변환
	상송관계에서 안전하게 형변환을 지원한다.
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