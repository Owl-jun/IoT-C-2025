#include <stdio.h>

// ---------

#define CHANGE ('a' - 'A')
void change_char(char* _val);

int main()
{
	char str[100];
	while (1)
	{
		printf("대소문자 변환 프로그램입니다.\n");
		printf("변환할 문자열을 입력해주세요. *최대 100자* (0를 입력하면 종료): \n");
		scanf_s("%s", str, sizeof(str));
		// 프로그램 종료조건
		if (str[0] == '0') { printf("프로그램 종료.\n"); break;}
		// 문자열 순회
		for (int i = 0; i < sizeof(str); ++i)
		{
			if (str[i] == '\0') { break; }
			change_char(&str[i]);	// 문자열 하나씩 바꿔버리기
		}
		
		printf("변환된 문자 : %s\n", str);
	}
	return 0;
}

void change_char(char* _val)
{
	if ((*_val >= 'A') && (*_val <= 'Z')) { *_val += CHANGE; }
	else if ((*_val >= 'a') && (*_val <= 'z')) { *_val -= CHANGE; }
	else if (*_val == ' ') {}
	else { printf("잘못된 입력입니다."); }
}
