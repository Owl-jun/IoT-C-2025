#include <iostream>

template <typename T>
class CTemplate {
private:
	T data;
public:
	CTemplate(T d) : data(d) {}
	T& getData() { return data; }
};

int main() {
	CTemplate<int> t(10);
	std::cout << t.getData();

	CTemplate<std::string> obj2("Ŭ�������ø��׽�Ʈ");
	std::cout << obj2.getData() << std::endl;

	return 0;
}