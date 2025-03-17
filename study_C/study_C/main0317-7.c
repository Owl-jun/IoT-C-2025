#include <stdio.h>

typedef struct mystruct{
	int num;
	double grade;
}myst;

int main() {

	myst s = {100, 99.9};
	printf("num : %d \ngrade : %.2lf", s.num, s.grade);
	return 0;
}