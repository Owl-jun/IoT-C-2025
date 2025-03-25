#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	std::vector<int> v1{ 10 };
	std::vector<int> v2(10,0);
	std::vector<int> v3 = {1,3,5,7,9};

	std::cout << v.size() << std::endl;
	std::cout << v1.size() << std::endl;
	std::cout << v2.size() << std::endl;
	std::cout << v3.size() << std::endl;
	
	v2.push_back(10);
	// 파이썬같은 출력가능 
	for (auto d : v2) {
		std::cout << d << std::endl;
	}

	for (auto iter = v3.begin(); iter != v3.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}
	
	return 0;
}