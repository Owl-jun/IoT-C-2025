#include "um.h"

int my_strcmp(char*, char*);

int main()
{
	char str[100] = "app";
	char str2[100] = "apple";
	if (my_strcmp(str, str2) == -1) puts("좌측이 더 우선순위 입니다.");
	else if (my_strcmp(str, str2) == 1) puts("우측이 더 우선순위 입니다.");
	else if (my_strcmp(str, str2) == 0) puts("둘이 같습니다.");

	return 0;
}

// 오름차순 기준 비교함수
int my_strcmp(char* A, char* B)
{
	// 각 str의 길이 구하기
	int A_len = strlen(A);
	int B_len = strlen(B);

	// 삼항연산자. 둘의 길이 중 더 짧은놈이 range 변수에 담김
	int range = A_len > B_len ? B_len : A_len;

	// 짧은놈을 기준으로 반복문 순회
	// 오름차순이 기준이니까 더 작은놈을 선택
	for (int i = 0; i < range; ++i)
	{
		if (A[i] < B[i]) { return -1; }
		else if (A[i] > B[i]) { return 1; }
		else { continue; }
	}
	// for 문에서 return문이 실행이 안됬다면 짧은str만큼의 범위에서 두 str이 같다는 말
	// 그렇다면 마지막으로 길이 기준으로 판단.
	if (A_len < B_len) { return -1; }
	else if (A_len > B_len) { return 1; }
	// 위에도 안걸리면 진짜 둘이 똑같은거임
	else { return 0; }
}