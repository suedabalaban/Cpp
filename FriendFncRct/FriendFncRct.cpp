#include <iostream>
using namespace std;

class Dot
{
    int x, y;
public:
    Dot(int _x, int _y) : x(_x), y(_y) {}
    float TakeX() { return x; }
    void AssignX(int _x) { x = _x; }
    float TakeY() { return y; }
    void AssignY(int _y) { y = _y; }
    friend class Rectangle;
};
class Rectangle
{
    Dot a ,b;
public:
    Rectangle(Dot _a, Dot _b): a(_a), b(_b){}
    int Area();
    int Perimeter();
};
int Rectangle::Area()
{
    return abs(a.x - b.x) * abs(a.y - b.y);
}
int Rectangle::Perimeter()
{
    return 2 * (abs(a.x - b.x) + abs(a.y - b.y));
}

class A
{
    static int m;
public:
    A();
    int TakeM();
    friend class B;
};
A::A()
{
    m++;
}
int A::TakeM()
{
    return m;
}
int A::m = 0;

class B
{
    static int n;
public:
    B(A& a) { n++; a.m++; }
    int TakeN();
};

int B::n = 0;
int B::TakeN()
{
    return n;
}

class X
{
    static int one;
    int number;
public:
    X(int = 0);
    X& Change(int);
    void Print();
};

int X::one = 3;
X::X(int a)
{
    one += 3;
    number = a;
}
void X::Print()
{
    cout << one << number << endl;
}
X& X::Change(int b)
{
    number *= b;
    return *this;
}

int main()
{
    int x, y;
    cout << "A = (x,y):";
    cin >> x >> y;
    Dot a(x, y);

    cout << "B = (x,y):";
    cin >> x >> y;
    Dot b(x, y);
    
    Rectangle r(a, b);
    cout << "Perimeter = " << r.Perimeter() << endl;
    cout << "Area = " << r.Area() << endl;

    A a1, a2, a3;
    B b1(a1), b2(a2), b3(a3);
    cout << "A-->m:" << a1.TakeM() << endl;
    cout << "B-->n:" << b1.TakeN() << endl;

    X obj1(3);
    obj1.Print();
    obj1.Change(4).Change(5).Print();
    X obj2;
    obj2.Print();
}