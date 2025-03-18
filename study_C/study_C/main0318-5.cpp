#include <iostream>

namespace aName {
	void func(){
		printf("aName::func()\n");
	}
}

namespace bName {
	void func() {
		printf("bName::func()\n");
	}
}

namespace cName {
	void func() {
		printf("cName::func()\n");
	}
}

int main()
{
	aName::func();
	bName::func();
	cName::func();
	return 0;
}