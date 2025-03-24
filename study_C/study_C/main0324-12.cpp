#include <iostream>

class Cinterface {
public:	
	Cinterface() { std::cout << "Cinterface constructor" << std::endl; }
	virtual void getData() const = 0;	// ¼ø °¡ ÇÔ
};
class CinSub : public Cinterface {
public:
	CinSub() { std::cout << "CinSub constructor" << std::endl; }
	void getData() const {
		std::cout << "Pure Virtual function()" << std::endl;
	}
};

int main() {
	CinSub c;
	c.getData();
	return 0;
}
