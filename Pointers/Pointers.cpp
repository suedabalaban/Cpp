#include <iostream>
using namespace std;

bool Func1(int* ptr1, int* ptr2)
{
	return ptr1 == ptr2;
}

bool Func2(int* ptr1, int* ptr2)
{
	return *ptr1 == *ptr2;
}

void Read(int gradeArr[], int amount)
{
	cout << "Enter the grades: ";
	for (int i = 0; i < amount; i++)
	{
		cin >> gradeArr[i];
	}
}

int* Copy(int* a, int size)
{
	int* b = new int[size];	
	for (int i = 0; i < size; i++)
	{
		b[i] = a[i];
	}
	return b;
	delete[] b;
}

int main()
{
	int size, total = 0, highest = 0;
	int* grades;

	cout << "Enter class size: ";
	cin >> size;
	grades = new int[size];

	Read(grades, size);

	for (int i = 0; i < size; i++)
	{
		total += grades[i];
		if (grades[i] > highest)
		{
			highest = grades[i];
		}
	}

	cout << "Class mean is :" << total / size << endl;
	cout << "Highest grade is: " << highest << endl;
	
	delete[] grades;

	int x = 4, y = 5;
	int *p1, *p2;
	p1 = &x;
	p2 = &y;

	p1 = p2;
	
	cout << "the value p1 hold: " << * p1 << endl;
	cout << Func1(p1, p2) << endl;

	int a[5] = { 1, 2, 3, 4, 5 };
	int* b = Copy(a, 5);
	for (int i = 0; i < 5; i++)
	{
		cout << b[i] << " ";
	}
}
