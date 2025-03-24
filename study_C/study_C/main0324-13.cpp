
#include <iostream>

class CTest {
private:
	int num;
public:
	CTest(int anum) : num(anum) { std::cout << num << " CTest constructor" << std::endl; }
	virtual ~CTest() { std::cout << "CTest destructor" << std::endl; }
	virtual void vfunc() { std::cout << "CTest virtual function()" << std::endl; }
	void func() { std::cout << "CTest function()" << std::endl; }
};

class CTestSub : public CTest {
private:
	int subN;
public:
	CTestSub(int anum, int snum) : CTest(anum), subN(snum) {}
	~CTestSub() { std::cout << "CTestSub destructor" << std::endl; }
	void vfunc() override { std::cout << "CTestSub function() override" << std::endl; }
	void func() { std::cout << "CTestSub function()" << std::endl; }
};

int main() {

	CTest* pC = new CTestSub(10,20);
	pC->vfunc();
	pC->func();

	delete pC;
	return 0;
}