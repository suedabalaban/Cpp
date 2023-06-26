#include <iostream>
using namespace std;

//A basic function method to print out the desired message.
void Message()
{
	cout << "A little under the weather \n";
}
void Print(string text = "no parameter given")
{
	cout << text;
}
//declaration and definition
int Sum(int x, int y);
double Sum(double x, double y);
using fvar = int(*)(int, int);

//callback function-1
int Get(int(*fvar)(int, int))
{
	int a = fvar(10, 10);
	return a;
}
//callback function-2 (including using fvar part)
int Get2(fvar f)
{
	int a = f(10, 10);
	return a;
}
//inline function--it only copies out the function body
inline int Multiply(int x, int y)
{
	return x * y;
}
int main()
{

	cout<<Sum(4.4, 6.5) << endl;
	int b = Get(Sum);
	cout << b <<endl;
	cout<< Multiply(2,1);

}
//function overloading--same name with different parameters.
double Sum(double x, double y)
{
	return x + y / 2;
}

int Sum(int x, int y)
{
	return x + y / 2;
}

