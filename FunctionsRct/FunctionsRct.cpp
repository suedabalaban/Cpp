#include <iostream>
#include <iostream> string;
using namespace std;

void BankOperation()
{
	string password;
	char operation;
	int draft, balance = 1000;
	cout << "welcome to x bank" << endl;
	cout << "please input your card" << endl;
	cout << "input the password of your card: ";
	cin >> password;
	if (password == "abcde")
	{
		cout << "Thanks\nOperation List\na-Draft Money\nb-Current Balance\n";
		cout << "Choose the operation you want to do: ";
		cin >> operation;
		if (operation == 'a')
		{
			cout << "Enter the amount of money you want to draft:";
			cin >> draft;
			if (draft <= balance)
			{
				balance -= draft;
				cout << "You can draft your money.\nCurrent Balance is: " << balance << endl;
			}
			else if (draft > balance)
			{
				cout << "invalid balance" << endl;
			}
		}
		else if (operation == 'b')
		{
			cout << "Current balance is: " << balance << endl;
		}
	}
	else if (password != "abcde")
	{
		cout << "invalid password" << endl;
	}
	cout << "Do not forget to take your card...";
}
int main()
{
	BankOperation();
	BankOperation();
}

