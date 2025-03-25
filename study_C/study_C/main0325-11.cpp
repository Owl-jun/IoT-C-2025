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
	weakPtr.lock()->func();	// �������� ���ĺ��ٰ�, .lock() �ϸ� �������� ������
	std::shared_ptr<MyClass> ptr2 = weakPtr.lock();
	if (ptr2 == ptr) { std::cout << "weak_ptr�� ��ȯ�� ptr2 ��밡��" << std::endl;}
	ptr2->func();

	int* i(new int());
	int* pI = new int();

	// ���ϸ� ����
	// �ֿ���
	// 6���� �ǽð� ����ϸ鼭 ��������
	// ä�ð���
	// ���尡��
	
	// ������ : ĳ���� ��� , ������ �޸���� �ո�� , ���ϸ� , ��
	// ��� : �Ӽ� ���� �� �����ؾߵ� 

	// ��� (DB , ���� , API , �ֿ����) // ����(FLASK) , Ȳ����(DB) , ���� , ����
	// ����Ʈ (������, ������, ������Ʈ) // ����(APIƲ¥�� ,������) , ����(������) 
	
	// ���ϸ��� UI �� 
	// ���ϸ� LAN���� 6�� �𿩼� �����ϰ� �̷��Ÿ������ �̷��� ��������.
	// ĳ���ʹ� ��������� �׸������� , �� ���ϸ� �� 30~40����
	// �ó��������� ������ �����ϰ�,
	
	// ���� �����̳� �ֺ������� �����
	// �������� ���� �ϰ�,
	// DB �� ���쳪 �����̰� �ð�
	
	// Ŭ��

	// ���� 3����
	// ���ʸ��� , ���ڻ��� , �����ϴ°�

	return 0;
}