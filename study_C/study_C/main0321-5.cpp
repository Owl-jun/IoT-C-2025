/*
*
*/
#include <iostream>

template <typename T>
class MyClass {
private:
	T x, y;
public:
	MyClass() {}
	MyClass(T _x, T _y)
		: x(_x)
		, y(_y)
	{
	}
	MyClass<T>& add(const MyClass<T>& _other)
	{
		x += _other.x;
		y += _other.y;
		return *this;
	}
	
	MyClass<T> operator + (const MyClass<T>& _other)
	{
		return MyClass<T>(x + _other.x, y + _other.y);
	}
	MyClass<T> operator + (const T& _num)
	{
		return MyClass<T>(x + _num, y + _num);
	}
	friend std::ostream& operator << (std::ostream& os, const MyClass<T>& mc)
	{
		os << mc.x << ", " << mc.y << std::endl;
		return os;
	}
};



int main()
{
	MyClass<int> obj(10, 20);	
	std::cout << "obj : " << obj;
	MyClass<int> obj2(20, 30);
	std::cout << "obj2 : " << obj2;
	MyClass<int> obj3 = obj.add(obj2);	
	std::cout << "obj3 : " << obj3;
	MyClass<int> obj4 = obj.operator+(obj3); 
	std::cout << "obj4 : " << obj4;
	MyClass<int> obj5 = obj4 + 100;
	std::cout << "obj5 : " << obj5;
	
	return 0;
}

