/* 

	pointer 핵심

*/
#include <stdio.h>

int main()
{
	// 메모리와, 메모리 주소라는 건 뭘까 ?

	int i = 15;	// main 스택 메모리에 4byte 크기 할당
	/*
	상세한 해석
	프로그래머가 사용하기위해 i 라는 명칭을 붙힌다.
	컴퓨터가 사용하기위해 int 라는 자료형을 준다.
	여기서 핵심포인트. "자료형"

	컴퓨터는 변수이름이 i 이던 asdpfksodf 이던 알바아니다.
	그저 자료형을 보고 어떤 일을 할지 판단한다는 말이다.
	그렇다면 컴퓨터는 int를 보고 무엇을 알 수 있을까?

	크기 : 4byte
	bit 해석 방법 : 정수형

	위 두가지를 알 수 있다.
	
	여기서 생각의 흐름
	1. 변수를 선언하면 메모리의 어떤 공간에 컴퓨터가 볼 수 있는 정보(자료형)를 토대로 크기를 할당한다.
	2. 할당한 그 공간은 프로그래머가 어떻게 사용할 수 있을까?
	3. 변수명을 통해 사용 할 수 있다. ( int i = 15; ) 와 같이 그 공간에 접근하여 데이터를 삽입 할 수 있다.
	*/

	// 그렇다면 포인터는 왜 생겨났을까?
	int* pI = &i;
	/*
	여러가지 이유가 있지만, 제일 논리적인 해답은 "문자열"을 다루기 위해서 생겨났다고 개인적으로 생각한다.
	문자열의 근본은 곧 char 자료형을 모아둔 "배열" 이다.

	여기서 배열의 이름은 "주소값" 이라는 것을 곰곰히 생각해보자.
	우리는 주소값, 즉 주소의 시작지점을 안다면 그 메모리 주소로 찾아가서 그 안에 있는 정보를 읽어올 수 있다.
	어떻게? 
	***앞에 붙어있는 자료형을 토대로 컴퓨터가 읽어온다.*** 
	이것만 안다면 모든 포인터를 논리적으로 이해할 수 있다.
	*/
	char str[20] = "abcd";
	printf("%s\n", str);
	/*
	그렇다면 위 코드에서 %s 포매팅에 str을 가져다 주었을 뿐인데 어떻게 abcd가 출력되는지 생각해본적 있는가?
	먼저 알고가야할 부분은 배열과 문자열은 매우 비슷하지만 엄연히 다르다는 사실.
	위 코드에서 char 배열의 시작주소 str을 넣어주었는데, 이 말은 str의 시작주소로 가서 char 크기 만큼 문자 형식으로 읽어오되, 
	'\0', 즉 NULL문자를 만나면 읽어오는 것을 멈추라는 뜻이다.
	*/
	int nums[20] = { 1,2,3,4,5, };
	printf("%d\n", nums);
	printf("%s\n", nums);
	// 위 코드를 실행 해보면 알 수 있듯이 배열과 문자열은 다르다.
	// 문자열은 알아서 배열을 순회하고 \0 을 기준으로 하나의 문자열로 보고 출력한다면
	// 배열은 그딴거 없다. nums 를 보내면 시작주소, 즉 nums 의 메모리 주소를 준다.

	/*
	
	모든 주소는 역참조  *를 통해 주소 안의 값으로 들어갈 수 있다.
	그게 포인터 변수 자체가 저장된 주소이던, int나 char가 저장된 주소이던간에 역참조를 통해 값을 긁어올 수 있다.
	어떻게? 자료형으로 알려줬으니까!


	위에 있는 nums의 값을 긁어와보자.
	*/

	printf("%d\n", nums[0]);	// 1
	printf("%d\n", *nums);		// 1 , *(nums + 0) == nums[0]

	// 포인터 변수
	int* pNum = &nums[0];	// nums 배열의 [0]이 저장된 주소를 가르키는 포인터변수		
	printf("%p\n", pNum);		// pNum 이 가르키고 있는 주소 (nums의 주소)
	printf("%p\n", &pNum);		// pNum 자체가 저장된 주소 (pNum의 주소)

	// 역참조의 이해
	printf("%d\n", *pNum);		// 1 , 
	// 포인터 변수를 역참조하면 포인터 변수가 가르키고 있는 주소가 가지고 있는 값을 반환한다.
	// 이해가 어렵다면 포인터가 어떤 주소를 가르키는 순간 본인이 그 변수의 주소가 된다고 생각하자.
	// ex ) int num = 30;
	//		int* pNum = &num;	--> pNum 자체가 num의 주소값이다 라고 생각.
	// 왜?
	/*
		int*
		char*
		int**
		위에서 말한 핵심이 중요한 이유다.
		* 이 문자를 기준으로 왼쪽에 있는게 자료형이다.
		
		역참조를 할 시 *(포인터) 앞에 있는 자료형을 토대로 해석해오기 때문임.
		증명
	*/
	int ss = 500;
	int* pSs = &ss;
	printf("%d\n", *pSs);	// 500 , pSs 는 ss의 주소를 담고있는데, 그걸 int로 해석했더니 500이 나오더라.

	int** ppSs = &pSs;
	printf("%p\n", *ppSs);	// ss의 주소 출력 , ppSs 는 pSs가 존재하는 메모리주소를 담고있는데, 그걸 int* 로 해석했더니 pSs는 ss를 담고있네?
	printf("%p\n", &ss);	// 증명 , ss의 주소

	char cc = 'a';
	char* pCc = &cc;	
	printf("%c\n", *pCc);	// 'a' , pCc 는 cc의 주소를 담고 있는데, 그걸 char로 해석했더니 'a'가 나오더라.

	// 아~~~ 존나 중요하다;
	// * 이 기호 왼쪽에 있는 녀석이 역참조를 하는 키포인트구나~
	
	// 추가 지식

	{
		int iArr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		int* iA = iArr;
		printf("%d", iA[9]);	// iArr[9]
		/*
		배열 이름과 포인터는 실질적으로 같다.
		그냥 똑같다.

		근데 왜 두개가 존재할까?
		*/
		printf("%d\n", iA[11]);
		printf("%d\n", sizeof(iA));		// 8
		printf("%d\n", sizeof(iArr));	// 40
		printf("%d\n", iArr[11]);
		// 위를 보면 둘다 인덱스 범위를 초과하는 것을 볼 수 있다.
		// 허나 배열선언방식은 크기를 알 수 있다. 즉 인덱스가 어디까지 존재하는 지 알 수 있기 때문에 배열형식을 사용한다.
	}

	return 0;
}