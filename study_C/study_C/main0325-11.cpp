#include <iostream>

class MyClass {
public:
	MyClass() { std::cout << "MyClass constructor!!" << std::endl; }
	~MyClass() { std::cout << "MyClass destructor!!" << std::endl; }
	void func() { std::cout << "Hi shared_ptr" << std::endl; }
};
int main()
{
	std::shared_ptr<MyClass> ptr = std::make_shared<MyClass>();
	std::weak_ptr<MyClass> weakPtr = ptr;
	weakPtr.lock()->func();	// 옆집에서 훔쳐보다가, .lock() 하면 옆집으로 변신함
	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();
	if (ptr2 == ptr) { std::cout << "weak_ptr로 변환한 ptr2 사용가능" << std::endl;}
	ptr2->func();

	int* i(new int());
	int* pI = new int();

	// 포켓몬 대전
	// 주요기능
	// 6명이 실시간 통신하면서 대전가능
	// 채팅가능
	// 저장가능
	
	// 디자인 : 캐릭터 모션 , 대전시 뒷모습과 앞모습 , 포켓몬 , 맵
	// 기능 : 속성 약점 등 구현해야됨 

	// 백단 (DB , 서버 , API , 주요로직) // 형우(FLASK) , 황석준(DB) , 찬수 , 동관
	// 프론트 (디자인, 렌더링, 리퀘스트) // 석준(API틀짜고 ,렌더링) , 보정(디자인) 
	
	// 포켓몬스터 UI 로 
	// 포켓몬 LAN으로 6명 모여서 대전하고 이런거만들던지 이런건 개꿀잼임.
	// 캐릭터는 내가만들고 그림판으로 , 맵 포켓몬 한 30~40마리
	// 시나리오뺴고 대전만 가능하고,
	
	// 맵을 디자이너 최보정씨가 만들고
	// 렌더링을 내가 하고,
	// DB 를 형우나 석준이가 맡고
	
	// 클라

	// 맵을 3개만
	// 태초마을 , 오박사집 , 대전하는곳

	return 0;
}