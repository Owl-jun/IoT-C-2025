/*
*	StaticTest��� Ŭ������ ����µ� ��������δ� �̸�, ��ȭ��ȣ, �ּ�, ȸ����ȣ(cnt)�� ������
*	3�� �Է��� �޴� �����ڸ� �����. ȸ����ȣ�� �ڵ����� ������ų ���̱� ������
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
	std::cout << "ȸ����ȣ : " << cust_id << std::endl;
	std::cout << "�̸� : " << name << " ��ȭ��ȣ : " << phone << " �ּ� : " << address << std::endl;
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
	StaticTest m1("ȫ�浿", "010-1111-1111", "�λ�");
	m1.showmemeber();
	StaticTest m2("�迵��", "010-2222-2222", "����");
	m2.showmemeber();
	StaticTest m3("��ö��", "010-3333-3333", "���");
	m3.showmemeber();

	m1.showmemeber();
	m2.showmemeber();
	m3.showmemeber();
	return 0;
}