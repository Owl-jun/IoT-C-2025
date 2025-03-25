#include <iostream>
#include <vector>
using namespace std;

void main()
{
	vector<string> v;

	v.push_back("tiger");
	v.push_back("lion1");
	v.push_back("elephant");
	v.push_back("horse");
	v.push_back("horse2");
	v.push_back("horse3");


	cout << v.front() << endl;
	cout << v.back() << endl;
	cout << v.capacity() << endl;
	v.pop_back();
	cout << v.capacity() << endl;

}