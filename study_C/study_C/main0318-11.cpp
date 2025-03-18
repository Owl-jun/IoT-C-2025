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
	Human h = {"±èÃ¶¼ö", 30, "¹é¼ö"};
	h.showHuman();
	return 0;
}