/*
	전역함수 오버로딩
*/
#include <iostream>

class Point {
private:
	int x, y;
public:
	Point() : x(0) , y(0) {}
	Point(int _x , int _y)
		: x(_x)
		, y(_y)
	{}
	Point operator + (const Point& _other)
	{
		return Point(x + _other.x, y + _other.y);
	}
	Point operator + (int _num)
	{
		return Point(x + _num, y + _num);
	}
	
	void showPoint() { std::cout << x << ", " << y << std::endl; }
	friend Point operator+(const int _n, const Point& _other);
	friend std::ostream& operator << (std::ostream& os, const Point& pt);
};

std::ostream& operator << (std::ostream& os, const Point& pt)
{
	os << pt.x << ", " << pt.y << std::endl;
	return os;
}
Point operator+(const int _n, const Point& _other)
{
	return Point(_n + _other.x, _n + _other.y);
}

int main()
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	std::cout << c;
	Point d = a + 100;
	std::cout << d;
	Point e = 200 + b;
	std::cout << e;
	return 0;
}