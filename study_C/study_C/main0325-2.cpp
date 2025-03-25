#include <iostream>
using namespace std;

class Super {
public:
	virtual void func() { cout << "Super::func()" << endl; }
	void func1() { cout << "Super::func1()" << endl; }
	void fx() { cout << "Super::fx()" << endl; }
};
class Sub : public Super {
public:
	void func() { cout << "Sub::func()" << endl; }
	void func2() { cout << "Sub::func2()" << endl; }
	void fx() { cout << "Sub::fx()" << endl; }
};

int main()
{
	Super* pSup = new Super{};
	pSup->func();
	pSup->func1();
	pSup->fx();
	cout << "-==-=-=-=-=-=-=-" << endl;
	Super* pSup2 = new Sub{};
	pSup2->func();
	pSup2->func1();
	pSup2->fx();
	cout << "-==-=-=-=-=-=-=-" << endl;
	Sub* sp3 = dynamic_cast<Sub*>(pSup2);
	sp3->func();
	sp3->func1();
	sp3->func2();
	sp3->fx();

	delete pSup;
	delete pSup2;
	return 0;
}