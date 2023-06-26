#include <iostream>
using namespace std;
void Test(int array[]) {
	for (int i = 0; i < 3; i++)
	{
		cout << array[i] << endl;
	}
};
void Test2(char array[]) {
	cout << array << endl;
};

int main()
{
	int grades[5]{ 15, 85, 63, 42, 78 };
	cout << grades[0] << endl;

	int emptyarray[5]{}; //it construct an array which consists of 5 zeros.

	cout << grades << endl; //it returns the memory address of the first index [0].
	cout << *grades << endl; //it returns the value of first index [0].

	int* ptr = grades + 1; //second index' pointer

	cout << ptr << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << grades[i] << endl;
	}

	//nested array

	int myArr[2][2]
	{
		{
			5,9
        },
		{
			4,2
        }
	};

	cout << myArr[1][0] << endl; //4

	for (int i = 0; i < 2; i++)
	{
		for (int i2 = 0; i2 < 2; i2++)
		{
			cout << myArr[i][i2] << endl; 
		}	
	}

	cout << size(myArr) << endl; //2
	 
	int array[3]{ 1, 2, 3 };
	Test(array);
	
	char a[]{ "Haribo" };
	
	Test2(a);


}

