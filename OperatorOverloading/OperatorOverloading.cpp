#include <iostream>
using namespace std;

class Dot
{
	int _x, _y;
public:
	Dot(int x = 0, int y = 0) { Assign(x, y); }
	void Assign(int x, int y);
	double operator-(const Dot&);
	Dot operator+(Dot&);
	Dot operator+(int);
	void Show();
};
void Dot::Assign(int i, int j)
{
	_x = i;
	_y = j;
}
double Dot :: operator-(const Dot& n)
{
	return sqrt((n._x - _x) * (n._x - _x) - (n._y - _y) * (n._y - _y));
}
Dot Dot::operator+(Dot& n)
{
	Dot newDot;
	newDot._x = _x + n._x;
	newDot._y = _y + n._y;
	return newDot;
}
Dot Dot :: operator+(int i)
{
	_x = _x + i;
	_y = _y + i;
	return Dot(_x, _y);
}
void Dot::Show()
{
	cout << "(" << _x << "," << _y << ")" << endl;
}

class Position
{
	int _x, _y;
public:
	Position(int x = 0, int y = 0) { AssignP(x, y); }
	void AssignP(int x, int y);
	void Show(void);
	Position operator+(const int i); //member function
	friend Position operator+(const Position&, const Position&);//non-member func
	int TakeX(void) { return _x; }
	int TakeY(void) { return _y; }
	void AssignX(int x) { _x = x; }
	void AssignY(int y) { _y = y; }
};
void Position::AssignP(int i, int j)
{
	_x = i;
	_y = j;
}
Position Position :: operator+(const int i)
{
	_x = _x + i;
	_y = _y + i;
	return Position(_x, _y);
}
//non-member function -> have to add accesifier functions in the class
//or we can identify friend func.
Position operator+(const int i, Position& p)
{
	Position p2;
	p2.AssignX(p.TakeX() + i);
	p2.AssignY(p.TakeY() + i);
	return p2;
}
void Position::Show(void)
{
	cout << "(" << _x << "," << _y << ")" << endl;
}
Position operator+(const Position& p1, const Position& p2)
{
	Position newP;
	newP._x = p1._x + p2._x;
	newP._y = p1._y + p2._y;
	return newP;
}
class Stream
{
	double _x, _y;
public:
	Stream(double = 0.0, double = 0.0);
	void AssignI(double, double);
	friend ostream& operator<<(ostream&, Stream&);
	friend istream& operator>>(istream&, Stream&);
};
ostream& operator<<(ostream& os, Stream& s)
{
	os << "(" << s._x << "," << s._y << ")" << endl;
	return os;
}
istream& operator>>(istream& is, Stream& s)
{
	is >> s._x;
	is >> s._y;
	return is;
}
Stream::Stream(double x, double y)
{
	AssignI(x, y);
}
void Stream::AssignI(double x, double y)
{
	_x = x;
	_y = y;
}
class Box
{
	int _length, _width, _height;
public:
	Box(int l, int w, int h): _length(l), _width(w), _height(h){}
	friend bool operator>(const Box&, const Box&);
	friend bool operator<(const Box&, const Box&);
	double Volume() const;
};
bool operator>(const Box& b1, const Box& b2)
{
	return b1.Volume() > b2.Volume();
}
bool operator<(const Box& b1, const Box& b2)
{
	return b1.Volume() < b2.Volume();
}
double Box::Volume() const
{
	return _length * _width * _height;
}
class Three
{
	int _a[3];
public:
	Three(int x, int y, int z) { _a[0] = x;_a[1] = y;_a[2] = z; }
	int operator[](const int i);
};
int Three::operator[](const int i)
{
	return _a[i];
}
int main()
{
  //math operators (+ - / *)
  //logic operators (! || &&) 
  //comparison operators (< > ==)

	Dot n1(1, 1), n2(4, 4), n3;
	cout << "Distance = " << n1 - n2 << endl;

	n1.Show();
	n2.Show();
	n3 = n1 + n2;
	n1 = n1 + 8;
	n1.Show();
	n3 = n1 + n2 + 5;
	n3.Show();

	Position p(5, 5);
	p = p + 13;
	p.Show();
	p = 13 + p;
	p.Show();
	
	/*Stream s(3, 4);
	cout << s << endl;
	cout << "Enter a position: (x,y)" << endl;
	cin >> s;
	cout << s << endl;*/

	Box b1(15, 8, 4), b2(3, 7, 8);
	if (b1>b2)
	{
		cout << "Box 1 is bigger" << endl;
	}
	else if (b1<b2)
	{
		cout << "Box 1 is smaller" << endl;
	}
	else
	{
		cout << "The boxes are equal" << endl;
	}

	Three t1(13, -12, 15);
	cout << t1[0] << endl;
	cout << t1[1] << endl;
}
