#include <iostream>

class Time {
private:
	int m_hour;
	int m_min;
	int m_sec;
public:
	void print() {
		std::cout << m_hour << "�� " << m_min << "�� " << m_sec << "�� �Դϴ�." << std::endl;
	}
public:
	Time() {}
	explicit Time(int abssec) 
		: m_hour(abssec/3600)
		, m_min((abssec/60) % 60)
		, m_sec(abssec%60)
	{}
};

int main() {

	Time watch(9999);
	watch.print();

	return 0;
}






