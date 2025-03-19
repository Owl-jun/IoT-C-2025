#include <iostream>
#include <string>

class CTime {
private:
	int m_hour{ 0 };
	int m_min{ 0 };
	int m_sec{ 0 };
public:
	void setTime(int h , int m , int s) {
		m_hour = h;
		m_min = m;
		m_sec = s;
	}
	void whatTimeisNow() const
	{
		std::cout << "���� �ð��� " << m_hour << ":" << m_min << ":" << m_sec << "�Դϴ�." << std::endl;
	}
public:
	CTime() {}
	CTime(int h, int m, int s) 
		: m_hour(h)
		, m_min(m)
		, m_sec(s)
	{
	}
};

int main() {
	CTime now = CTime();
	now.whatTimeisNow();
	
	CTime t{ 15,30,30 };
	t.whatTimeisNow();
	return 0;
}