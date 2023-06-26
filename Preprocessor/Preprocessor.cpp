#include <iostream>
#include "Library.h" //user file example.
using namespace std;

#define NUMBER 1 //creating a macro.
#define SUM(a, b) (a + b)
#define DEBUG

//int Multiply(int a, int b);

int main()
{
//#ifdef DEBUG //conditional compilation
//
//    cout << NUMBER + NUMBER << endl;
//    cout << SUM(8, 9) << endl;
//    cout << Multiply(12, 4);
//#endif

	Math math(2,8);
	cout << math.Multiply();

}
