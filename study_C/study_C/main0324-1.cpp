/*
상속

부모
public
protected
private

상속
public : 있는 그대로 상속
protected : public 을 모두 protected로 상속
private : 모든 멤버를 private로 상속

헷갈리는 부분
부모 public
상속 protected 시

상속 클래스로 객체를 만들면 protected
부모 클래스로 만들면 public이다.

IS-A : 상속 (A는 B이다.)
HAS-A : 포함 (자동차는 엔진을 가진다.) , 그냥 다른 클래스를 멤버로 들여옴.

*/

#include <iostream>

class Human {		// Parents , Base , Super CLASS
private:
	char name[20];
	int age;
public:
	Human(const char* _name, int _age);
	void getData();
};

class Student : public Human {	
private:
	int studentID;
public:
	Student(const char* _name, int _age, int _studentID);
	void showStudent();
};

Human::Human(const char* _name, int _age) 
	: age(_age)
{
	strcpy_s(name, 20, _name);
}

void Human::getData()
{
	std::cout << "이름은 : " << name << " 나이는 : " << age << std::endl;
}

Student::Student(const char* _name, int _age, int _studentID)
	: Human(_name, _age)
	, studentID(_studentID)
{
}

void Student::showStudent() {
	getData();
	std::cout << "학번 : " << studentID << std::endl;
}

int main()
{
	Student s("김군", 22, 1470007868);
	s.getData();
	s.showStudent();
	return 0;
}