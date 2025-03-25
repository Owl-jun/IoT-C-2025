/*
* vector 2
*/
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v;
	std::vector<int>::iterator vIter = v.begin();
	for (int i = 0; i < 32; ++i)
	{
		v.push_back(i + 1);
		std::cout << v[i] << v.size() << v.capacity() << std::endl;
	}

	return 0;
}