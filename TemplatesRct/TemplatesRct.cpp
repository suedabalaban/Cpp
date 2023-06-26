#include <iostream>
using namespace std;

template<class T,class U>
class Double
{
	T _x;
	U _y;
public:
	Double(T x, U y):_x(x),_y(y){}
	void Print();
};
template<class T, class U>
void Double<T, U>:: Print()
{
	cout << _x << endl;
	cout << _y << endl;
}
int main()
{
	Double <int, char> d1(9, 'c');
	d1.Print();
}

