#include <iostream>
/*
	객체를 더하는 함수 : add()
*/
class Point {
public:
	int x, y;
	friend std::ostream& operator << (std::ostream& os, const Point& p);
	Point(int _x = 0, int _y = 0)
		: x(_x)
		, y(_y)
	{
		std::cout << "constructor" << std::endl;
	}
	Point(const Point& _other)
		: x(_other.x)
		, y(_other.y)
	{
		std::cout << "copy constructor" << std::endl;
	}
	Point add(const Point& _other) {
		std::cout << "add()" << std::endl;
		return Point(x + _other.x, y + _other.y);
	}
};

std::ostream& operator << (std::ostream& os, const Point& p)
{
	os << p.x << ", " << p.y << std::endl;
	return os;
}

int main() {
	Point p(10, 20);
	Point p2(30, 40);
	Point p3;
	p3 = p.add(p2);	
	std::cout << p3;
	return 0;
}