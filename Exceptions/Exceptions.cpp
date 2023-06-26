#include <iostream>
using namespace std;

class Excpt
{
private:
	string _message;
public:
	Excpt(string message)
	{
		this->_message = message; //_message = message; also works.
	}
	string Write()
	{
		return _message;
	}
};

string Err(string error)
{
	return error;
}


float Divide(int a, int b)
{
	try
	{
		if (b == 0)
		{
			//throw Excpt("problem"); //exception with class
			throw Err("problem"); //exception with function
		}
		return (a / b);
	}
	catch (int err)
	{
		cout << "it cannot be divided by 0" << endl;
	}
	catch (Excpt err)
	{
		cout << err.Write() << endl;
	}
	catch (string err)
	{
		cout << err << endl;
	}
}

int main()
{
    cout << Divide(3.5f, 2.3f);
}
