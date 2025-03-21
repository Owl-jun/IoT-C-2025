/*
	전역함수 연산자 오버로딩
*/

#include <iostream>

class Complex {
private:
	double real, image;
	friend Complex operator*(int n, const Complex& other);
	friend std::ostream& operator << (std::ostream& os, const Complex& c);
public:
	Complex(double r = 0, double i = 0) 
		: real(r)
		, image(i)
	{ }
	Complex add(const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator + (const Complex& other) {
		return Complex(real + other.real, image + other.image);
	}
	Complex operator * (int n)
	{
		return Complex(real * n, image * n);
	}
	void showComplex() {
		std::cout << "real : " << real << " image : " << image << std::endl;
	}
};

Complex operator*(int n, const Complex& other) {
	return Complex(n * other.real, n * other.image);
}

std::ostream& operator << (std::ostream& os, const Complex& c)
{
	os << "real : " << c.real << " image : " << c.image << std::endl;
	return os;
}

int main()
{
	Complex c(1.1, 2.2);
	Complex c2(3.3, 4.4);
	Complex c3 = c + c2;
	std::cout << c3;
	Complex c4 = c * 100;
	std::cout << c4;
	Complex c5 = 100 * c3;
	std::cout << c5;
	
	return 0;
}