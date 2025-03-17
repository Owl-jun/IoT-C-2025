#include <stdio.h>
#include <string.h>

typedef struct Human{
	char* name; 
	int age;
	char name2[100];
}hm;

int main() 
{	
	hm my;
	my.name = "강석준";
	my.age = 31;
	strcpy_s(my.name2,100, "강석준");
	
	printf("나의 이름은 %s 이고 , 나이는 %d세 입니다.", my.name2 , my.age);
	return 0;
}