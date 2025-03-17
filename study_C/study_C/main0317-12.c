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
		{"ȫ�浿",33,"010-9555-3444","�λ걤���� ���� �ż��� 365"}, 
		{"��ö��",39,"010-3494-4885","�λ걤���� ����"},
		{"�迵��",9,"010-3339-3299","�λ걤���� �ϱ�"},
		{"������",19,"010-3339-3299","�λ걤���� �ϱ�"},
		{"�����",29,"010-3339-3299","�λ걤���� �ϱ�"},
		{"�輼��",39,"010-3339-3299","�λ걤���� �ϱ�"},
		{"�����",49,"010-3339-3299","�λ걤���� �ϱ�"}
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
