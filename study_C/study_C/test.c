#include <stdio.h>


int main()
{
	// 문제가 안 풀릴시 보내준 소스코드를 복사붙혀넣기하고 79행부터 정독하자
	/*
	1. 한개의 포인터로 아래 3개의 변수를 모두 출력해보시오.
	printf("%d",i_one); <<-- 이렇게 쓰면 안됨, 포인터 변수로 출력해야함.
	결과 : 1 2 3
	*/
	int i_one = 1;
	int i_two = 2;
	int i_three = 3;

	/*
	2. 한개의 포인터로 아래 3개의 변수를 모두 출력해보시오.
	조건 char** 이중포인터 사용
	결과 : one two three
	*/
	char* c_one = "one";
	char* c_two = "two";
	char* c_three = "three";
	
    /*
    3. 포인터 연산을 이용하여 배열의 모든 요소를 출력해보시오.
    배열명을 직접 사용하지 않고 포인터를 활용해야 한다.
    결과 : 10 20 30 40 50
    */
    int arr[] = { 10, 20, 30, 40, 50 };

    /*
    4. void 포인터 pVoid 만을 사용하여 int, float, char 값을 출력하시오.
    결과 :
    정수: 100
    실수: 3.14
    문자: A
    */
    int i_val = 100;
    float f_val = 3.14f;
    char c_val = 'A';  

    /*
    5. 포인터 배열을 활용하여 여러 개의 문자열을 출력해보시오.
    단, 포인터 배열을 활용해야 한다.
    결과 :
    Hello
    World
    Pointer
    */
    char* str_arr[] = { "Hello", "World", "Pointer" };
    

	/*
    6. 배열 포인터를 활용하여 2차원 배열을 출력해보자.
    결과 : 
    1 2 3 4
    5 6 7 8
    9 10 11 12
    */

    int Ary[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int(*pAry)[4] = Ary;    // 6-2. 이게 무슨 뜻인지 각자의 생각을 주석으로 적어보시오.
    
	return 0;
}
