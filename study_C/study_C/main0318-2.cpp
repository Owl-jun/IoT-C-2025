#include <iostream>

using namespace std;
void swap(int*, int*);
void swap(char*, char*);
void swap(double*, double*);
int main() {

	int n1 = 20 , n2 = 30;
	swap(&n1, &n2);
	cout << n1 << n2 << endl;

	char c1 = 'a', c2 = 'c';
	swap(&c1, &c2);
	cout << c1 << c2 << endl;

	return 0;
}

void swap(int* n1, int* n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

void swap(char* c1, char* c2)
{
	char temp = *c1;
	*c1 = *c2;
	*c2 = temp;
}

void swap(double* d1, double* d2)
{
	double temp = *d1;
	*d1 = *d2;
	*d2 = temp;
}
