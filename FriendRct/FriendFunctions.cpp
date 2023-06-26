#include <iostream>
#define PI 3.14
using namespace std;

//composition
class Date {
	int _day, _month, _year;
public:
	Date(int d, int m, int y): _day(d), _month(m), _year(y){}
	void Print();
};
void Date::Print()
{
	cout << _day << "/" << _month << "/" << _year << endl;
}

class Person {
	string _name;
	Date _birthday;
public:
	Person(string, int, int, int);
	void Print();
};
Person::Person(string n, int d, int m, int  y): _birthday(d,m,y)
{
	_name = n;
}
void Person::Print()
{
	cout << _name << " ";
	_birthday.Print();
}
//friend function
class Example 
{
private:
	int _number;
public:
	Example(int n = 0):_number(n){}
	friend void Print(Example&); //friend func prototype
 };

void Print(Example& x)
{
	cout << "number =" << x._number << endl;
}

//friend class
class B;
class A
{
	int _x;
public:
	A(int x): _x(x){}
	friend class B;
};
class B
{
	int _y;
public:
	void Fund(A& obj);
};
void B::Fund(A& obj)
{
	_y = obj._x;
	cout << "y=" << _y << endl;
}

//constant member functions
class Circle
{
	int _r;
public:
	Circle(int r): _r(r){}
	int TakeR() const
	{
		return _r;
	}
	void AssignR(int r) 
	{
		_r = r;
	}
	float Area() const;
	float Area();
};

float Circle::Area() const //const func
{
	cout << "const member function" << endl;
	return PI * _r * _r;
}
float Circle::Area() //non-const func
{ 
	cout << "non-const member function" << endl;
	return PI * _r * _r;
}

class Square
{
	int sideLength;
public:
	void Read();
	int Perimeter();
};

void Square::Read()
{
	cout << "Enter the side length: ";
	cin >> sideLength;
}
int Square::Perimeter()
{
	return sideLength * 4;
}
//function chaining
class Numeral
{
	int _n;
public:
	Numeral(int n=0): _n(n){}
	Numeral& Add(int);
	void Print();
};
Numeral& Numeral:: Add(int x)
{
	_n += x;
	return *this; //returns to the object we in
}
void Numeral::Print()
{
	cout << "n=" << endl;
}

int main()
{
	Person person("Jack", 9, 5, 1995);
	person.Print();

	Example ex1(7), ex2(12);
	Print(ex1);

	A one(10);
	B two;
	two.Fund(one);

	//constant object
	const Example num(4);
	//num.number = 3213; --> causes error (in case of public number variable)

	Circle c1(3);
	cout << c1.Area() << endl;

	const Circle c2(3);
	cout << c2.Area() << endl;
	//c2.AssignR(3); --> causes error since c2 is constant func object
	c1.AssignR(2); //--> would work properly
	cout << "New area of changed value: "<< c1.Area() << endl;

	//dynamic memory usage
	Square* s = new Square;
	s->Read();
	cout << "Perimeter = " << s->Perimeter() << endl;
	delete s;

	//function chaining
	Numeral n1(1);
	n1.Add(2).Add(3).Print();
}
