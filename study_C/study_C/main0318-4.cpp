#include <iostream>

double coordinates(int x, int y=0, int z=0);

int main()
{

	double n = coordinates(2, 2, 2);
	std::cout << n;
	return 0;
}

double coordinates(int x, int y, int z)
{
	
	return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
}
