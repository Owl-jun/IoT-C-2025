#include <stdio.h>

typedef int 어엄;
typedef char 어;
typedef float 엄어;
#define 엄  printf
#define 사람이름이	"%s"
#define 어떻게	if
#define 흠		else
void myStrInput(어*, 어엄);

int main()
{
	어 str[100];
	myStrInput(str,sizeof(str));
	엄("입력한 문자열:");
	엄(사람이름이, str);

	return 0;
}

void myStrInput(어* str, 어엄 size)
{
	어엄 count = 0;
	while(count < size-1)
	{
		어 temp = getchar();
		어떻게(temp == '\n') { break; }
		흠{ *(str + count) =temp; }
		++count;
	}
	*(str + count) = '\0';
}