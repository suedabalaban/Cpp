#include <iostream>
using namespace std;

class Alg {
public:
	static int z;
	Alg(int x = 1) { z += x; }
	~Alg() { cout << z << " "; }
	int Add(int);
	friend int Add(int);
};
int Alg::z = 0;
int Add(int y)
{
	return 2 + y;
}
int Alg::Add(int y)
{
	return z + y;
}
int main()
{
	Alg obj1(4), obj2, obj3(5);
	cout << Add(obj1.z) << " ";
	cout << Add(obj2.Add(2)) << " ";
	cout << obj3.z << " ";
	return 0;
}