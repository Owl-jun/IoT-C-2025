#include <iostream>

class ConstClass {
private:
	int m_value;
	const int m_value2;
public:
	void showValue() { std::cout << "m_value : " << m_value << std::endl; std::cout << "m_value2 : " << m_value2 << std::endl;}
public:
	ConstClass(int value, int val2) 
		: m_value(value) 
		, m_value2(val2)
	{}
};

class RefClass {
private:
	int& ref;
public:
	void showvalue() { std::cout << ref << std::endl; }
	RefClass(int& num) : ref(num) {}
};

class Position {
private:
	int m_x;
	int m_y;
public:
	int getX() { return m_x; }
	int getY() { return m_y; }
	Position(int _x, int _y) 
		: m_x(_x)
		, m_y(_y)
	{}
};

class ObjClass {
private:
	Position pos;
public:
	void showvalue()
	{
		std::cout << "x : " << pos.getX() << " " << "y : " << pos.getY() << std::endl;
	}
public:
	ObjClass(int x, int y) 
		: pos(Position(x,y))
	{}

	ObjClass(Position& _pos)
		: pos(_pos)
	{}
};

int main()
{
	Position pos(3, 6);
	ObjClass obj(5, 10);
	ObjClass obj2{ pos };
	obj.showvalue();
	obj2.showvalue();
	
	return 0;
}

