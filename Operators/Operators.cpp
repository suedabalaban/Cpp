#include <iostream>
using namespace std;

int main()
{
	cout << "12 + 9 is: " << 12 + 9 << endl; //addition
	cout << "56 - 5 is :" << 56 - 5 << endl; //substraction
	cout << "5 * 3 is: "<< 5 * 3 << endl; //multiplication
	cout << "45 / 3 is: " << 42 / 3 << endl; //division

	int a, b ;

	a = 10;
    int result = --a;
	cout << "a = 10, --a is: "<< a << endl;

	b = 5;

	a += b; //assignment operator --> a = a + b;

	cout << a << endl; 

	//logic operators

	bool x = 8 >= 5;
	cout << !x << endl; //it reverses the result

	//&&--and , ||--or
}