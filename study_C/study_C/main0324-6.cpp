/*
	��ü ���� ����
*/

#include <iostream>

class AClass {
public:
	void showAclass() {
		std::cout << "Dynamic created object" << std::endl;
	}
};

int main() {

	AClass* a = new AClass;
	
	a->showAclass();

	delete a;

	return 0;
}