#include <iostream>

#define ADD(a,b)	#a "+" #b
#define PI 3.14
#define MSG(x,y,z)	#x#z#y

int main() {
	std::cout << "ADD(a, b) : " << ADD(10, 20) << MSG(10,20,30);
	return 0;
}