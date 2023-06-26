#include <iostream>
using namespace std;

template <typename T> //class template
class Math
{
public:
	T a{}, b{}; //{} indicates default value.
	T Sum(T a, T b)
	{
		return a + b;
	}
};


template<typename T , typename U> //function template
U Max(T a, U b)
{
	return (a > b) ? a : b; //next to : represents else part. ? holds if.
}

template <class T >
T* CreateObject()
{
	T object;
	return &object;
}
class Pencil{};
class Case{};
class Eraser{};

int main()
{
	cout << Max(2, 6.2f) << endl;
	Math<int> math;
	cout << math.Sum(8, 9) << endl;

	Math<float> math2;
	cout << math2.Sum(1.3f, 5.8f) << endl;

	cout << CreateObject <Eraser>() << endl;
}