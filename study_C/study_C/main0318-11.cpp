#include <iostream>

struct Human {

	char name[20];
	int age;
	char job[40];

	void showHuman()
	{
		std::cout << name << age << job << std::endl;
	}
		
};

int main()
{
	Human h = {"��ö��", 30, "���"};
	h.showHuman();
	return 0;
}