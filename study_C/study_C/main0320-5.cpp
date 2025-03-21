#include <iostream>

class Time {
private:
	int m_hour;
	int m_min;
	int m_sec;
public:
	void print() {
		std::cout << m_hour << "시 " << m_min << "분 " << m_sec << "초 입니다." << std::endl;
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






