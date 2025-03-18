#include <iostream>

struct Human {
private:
	const char* name;
	int age;
	const char* job;

public:
	void showInfo()
	{
		std::cout << name << " " << age << " " << job << std::endl;
	}

public:
	Human(const char* _name, int _age, const char* _job)
		: name(_name)
		, age(_age)
		, job(_job)
	{}
	~Human() {} 

};

int main()
{
	Human h("±èÃ¶¼ö", 30, "¹é¼ö");
	h.showInfo();
	return 0;
}