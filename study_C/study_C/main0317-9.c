#include <stdio.h>

typedef struct profile {
	int age;
	double height;
	double weight;
}profile;

typedef struct student {
	profile pf;
	int id;
	double grade;
}student;

int main() {
	student s;

	s.id = 1470007868;
	s.grade = 99.9;
	s.pf.age = 20;
	s.pf.height = 179.7;
	s.pf.weight = 72;
	return 0;
}