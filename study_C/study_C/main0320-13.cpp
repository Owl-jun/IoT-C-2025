/*
	operator 연산자 오버로딩
*/
#include <iostream>

class Point {
public:

	int x, y;

	Point(int _x=0, int _y=0)
		: x(_x)
		, y(_y)
	{}

	void showPoint()
	{
		std::cout << "x : " << x << " y : " << y << std::endl;
	}

	Point add(const Point& _other)
	{
		std::cout << "add call" << std::endl;
		return Point(this->x + _other.x, this->y + _other.y);	
	}

	Point& operator = (const Point& _other)
	{
		this->x = _other.x;
		this->y = _other.y;
		return *this;
	}

	
};


int main()
{
	Point a(10, 20);
	a.showPoint();
	Point b(30, 40);
	b.showPoint();
	Point obj3;
	obj3 = a.add(b);
	obj3.showPoint();
	
	return 0;
}