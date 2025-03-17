#include <stdio.h>
#include <string.h>
typedef struct addr {
	char name[20];
	int age;
	char tel[20];
	char add[100];
}Addr;

void print_list(Addr* _addr, int size);

int main()
{
	Addr list[] = { 
		{"全辨悼",33,"010-9555-3444","何魂堡开矫 巢备 脚急肺 365"}, 
		{"辫枚荐",39,"010-3494-4885","何魂堡开矫 辑备"},
		{"辫康锐",9,"010-3339-3299","何魂堡开矫 合备"},
		{"辫老锐",19,"010-3339-3299","何魂堡开矫 合备"},
		{"辫笛锐",29,"010-3339-3299","何魂堡开矫 合备"},
		{"辫技锐",39,"010-3339-3299","何魂堡开矫 合备"},
		{"辫匙锐",49,"010-3339-3299","何魂堡开矫 合备"}
	};
	
	int size = (sizeof(list) / sizeof(list[0]));
	print_list(list,size);
	
	return 0;
}

void print_list(Addr* _addr, int size)
{	
	for (int i = 0; i < size; ++i)
	{
		printf("%s, %d, %s, %s \n", (_addr+i)->name, (_addr + i)->age, (_addr + i)->tel, (_addr + i)->add);
	}
}
