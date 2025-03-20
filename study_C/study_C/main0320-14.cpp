#include <iostream>

class Point {
private:
	int x, y;

public:
	Point(int _x = 0, int _y = 0)
		: x(_x)
		, y(_y)
	{
		std::cout << "constructor call" << std::endl;
	}

	Point(const Point& _other)
		: x(_other.x)
		, y(_other.y)
	{
		std::cout << "copy constructor call" << std::endl;
	}

public:
	void showPoint()
	{
		std::cout << "x : " << x << " y : " << y << std::endl;
	}

public:
	Point add(const Point& _other)
	{
		std::cout << "Function : add() call" << std::endl;
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
	Point obj(10, 20);
	obj.showPoint();
	Point obj2(30, 40);
	obj2.showPoint();
	Point obj3;
	obj3 = obj.add(obj2);		// RVO 최적화로 인하여 복사/이동 없이 바로 obj3 가 생성됨.
	obj3.showPoint();
	return 0;
}

