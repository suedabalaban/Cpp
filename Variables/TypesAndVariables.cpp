#include <iostream>
using namespace std;

int main()
{
    //1st way of declaring variable
	int number1 = 5;
	int number2 = 10;

	cout << number1 + number2 << endl;

	int result = number1 + number2;

	cout << result<<endl;

	//2nd way of declaring variable

	int number3, number4, result2;

	number3 = 2;
	number4 = 9;
	result2 = number3 + number4;
	
	cout << result2 << endl;

	char d = 66; //01000010 = B

	cout << d <<endl;

	char s[] = "hello";
	
	cout << s[2] <<endl;
	
	//integer overflow

	unsigned short x = 65535;
	cout << "x's value: " << x << endl;

	x = 65536; //max value unsigned x can get
	cout << "x's new value: " << x << endl; //it returns the remained number after boundary.

	x = 65537; 
	cout << "x's last value: " << x << endl; //65537 - 65536 = 1

	auto y = 2; //compiler determines the type by itself.
	cout << y << endl; 

	//different ways of defining a variable.
	int p = 4;
	int r(2);
	int t{ 9 }; //additionally, catches error while executing.

	const double pi = 3.14; //keyword for defining constant variable.

	//explicit type conversion
	int f;
	f = static_cast<int>(5.8);
	cout << f << endl;

	char ch{ 96 };
	cout << ch;
	cout << static_cast<int>(ch);

}
