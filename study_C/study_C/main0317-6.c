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
	my.name = "������";
	my.age = 31;
	strcpy_s(my.name2,100, "������");
	
	printf("���� �̸��� %s �̰� , ���̴� %d�� �Դϴ�.", my.name2 , my.age);
	return 0;
}