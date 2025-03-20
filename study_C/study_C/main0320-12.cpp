/*
*	StaticTest라는 클래스를 만드는데 멤버변수로는 이름, 전화번호, 주소, 회원번호(cnt)를 가지고
*	3개 입력을 받는 생성자를 만든다. 회원번호는 자동으로 증가시킬 것이기 때문에
*/
#include <iostream>

class StaticTest {
private:
	char* name;
	char* phone;
	char* address;
	int cust_id;
	static int cnt;
public:
	void showmemeber();
public:
	StaticTest(const char*, const char*, const char*);
	~StaticTest();
};

int StaticTest::cnt = 1;

void StaticTest::showmemeber()
{
	std::cout << "회원번호 : " << cust_id << std::endl;
	std::cout << "이름 : " << name << " 전화번호 : " << phone << " 주소 : " << address << std::endl;
}

StaticTest::StaticTest(const char* _name, const char* _phone, const char* _address)
	: name(new char[strlen(_name) + 1])
	, phone(new char[strlen(_phone) + 1])
	, address(new char[strlen(_address) + 1])
	, cust_id(cnt++)
{
	strcpy_s(name, strlen(_name) + 1, _name);
	strcpy_s(phone, strlen(_phone) + 1, _phone);
	strcpy_s(address, strlen(_address) + 1, _address);
}

StaticTest::~StaticTest()
{
	delete[] name;
	delete[] phone;
	delete[] address;
}


int main() {
	StaticTest m1("홍길동", "010-1111-1111", "부산");
	m1.showmemeber();
	StaticTest m2("김영희", "010-2222-2222", "마산");
	m2.showmemeber();
	StaticTest m3("김철수", "010-3333-3333", "울산");
	m3.showmemeber();

	m1.showmemeber();
	m2.showmemeber();
	m3.showmemeber();
	return 0;
}