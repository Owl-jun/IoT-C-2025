#include "um.h"
/*
	puts, fputs - 전용 출력함수
	strcpy - 문자열 복사 함수
*/

void my_strcpy(char*, int, char*);

int main()
{
	char str[10] = "orange";
	char str2[50] = "ara";
	puts(str);
	puts(str2);
	//my_strcpy(str,sizeof(str), str2);
	strncpy(&str[2], str2, 3);
	
	puts(str);
	puts(str2);
	return 0;
}

void my_strcpy(char* target,int sizet, char* copy)
{
	int idx = 0; int lenCopy = 0;
	// 실제 문자열의 길이 체크
	while (copy[lenCopy] != '\0') { ++lenCopy; } 
	// 배열 인덱스 초과 예외 처리
	if (sizet-1 < lenCopy) { puts("복사하기에 충분한 공간이 없습니다! 배열의 크기를 늘려주세요."); return; }
	else { for (; idx < sizet; ++idx) target[idx] = copy[idx]; }
}
