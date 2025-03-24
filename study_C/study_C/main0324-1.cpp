/*
���

�θ�
public
protected
private

���
public : �ִ� �״�� ���
protected : public �� ��� protected�� ���
private : ��� ����� private�� ���

�򰥸��� �κ�
�θ� public
��� protected ��

��� Ŭ������ ��ü�� ����� protected
�θ� Ŭ������ ����� public�̴�.

IS-A : ��� (A�� B�̴�.)
HAS-A : ���� (�ڵ����� ������ ������.) , �׳� �ٸ� Ŭ������ ����� �鿩��.

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
	std::cout << "�̸��� : " << name << " ���̴� : " << age << std::endl;
}

Student::Student(const char* _name, int _age, int _studentID)
	: Human(_name, _age)
	, studentID(_studentID)
{
}

void Student::showStudent() {
	getData();
	std::cout << "�й� : " << studentID << std::endl;
}

int main()
{
	Student s("�豺", 22, 1470007868);
	s.getData();
	s.showStudent();
	return 0;
}