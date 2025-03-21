#include <iostream>

class BoxClass {
private:
	int m_width{ 0 };
	int m_height{ 0 };
	int m_length{ 0 };
public:
	int get_volume() {
		return m_width * m_height * m_length;
	}
	BoxClass(){}
	BoxClass(int width, int hei, int len)
		: m_width(width)
		, m_height(hei)
		, m_length(len)
	{
	}
};

int main() {
	BoxClass voidbox;
	BoxClass applebox{ 20,10,5 };
	std::cout << voidbox.get_volume() << std::endl;
	std::cout << applebox.get_volume() << std::endl;

	return 0;
}