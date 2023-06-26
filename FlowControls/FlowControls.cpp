#include <iostream>
using namespace std;

int main()
{
	int a = 0, b = 0;
	char operation = '+';

	while (operation != 's') //it loops until the given parameter is equal to s.
	{
		cout << "Input the first number: ";
		cin >> a;
		cout << "Input the second number: ";
		cin >> b;
		cout << "Input the operation: ";
		cin >> operation;

		if (operation == '+')
		{
			cout << "result: " << a + b << endl;
		}
		else
		{
			cout << "No operation.";
		}

		//int x = 5;
		//cout << "result: " << ++x * 3; //result = 18
		//cout << "result: " << x++ * 3; //result = 15

		switch (operation)
		{
		case '+':
			cout << "result: " << a + b << endl;
			break;
		case '-':
			cout << "result: " << a - b << endl;
			break;
		case '*':
			cout << "result: " << a * b << endl;
			break;
		case '/':
			cout << "result: " << a / b << endl;
			break;
		default:
			cout << "unknown operation." << endl;
			break;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}

	int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i += 2;
	}

	do //it runs at least for once.
	{
		cout << "unknown operator." << endl;
	} while (false);
}
