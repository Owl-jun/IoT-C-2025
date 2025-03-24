#include <iostream>

class Human {
protected:
	char name[20];
	int age;
public:
	Human(const char* _name , int _age)
		: age(_age)
	{
		strcpy_s(name, 20, _name);
	}
	void getData() {
		std::cout << "이름 : " << name << " 나이 : " << age << std::endl;
	}
};

class Student : public Human {
private:
	int studentID;
public:
	Student(const char* _name, int _age, int _ID)
		: Human(_name, _age)
		, studentID(_ID)
	{
	}
	void showStudent() {
		std::cout << "이름 : " << name << " 나이 : " << age << " 학번 : " << studentID << std::endl;
	}
};

int main() {
	Student s{ "길동이",23,14707868 };
	s.showStudent();

	return 0;
}