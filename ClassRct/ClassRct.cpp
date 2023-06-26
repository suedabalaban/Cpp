#include <iostream>
using namespace std;
int a = 3;
class A
{
    int F1();
public:
    int x;
    int y;
    int F2();
    void AssignX(int x);
};

int A::F1()
{
    return 2 * x * y;
}
int A::F2()
{
    F1();
    return x * x + y * y + F1();
}
void A::AssignX(int _x)
{
    x = _x;
}

class B
{
    int _b,_c;
public:
    void Assign(int, int);
    int Fund(int&, int = 8);
};
void B::Assign(int d, int e)
{
    _b = d;
    _c = e;
    a += 5; 
}
int B::Fund(int& f, int g)
{
    f *= 3;
    g *= 4;
    _b += 2;
    _c += 3;
    cout << f << " " << endl;
    return f + g;
}

class Time
{
    int _hour;
    int _minute;
public:
    void Set(int h =12, int m = 0);
    void Increase();
    void Show();

};
void Time::Set(int h, int m)
{
    _hour = h;
    _minute = m;
}

void Time::Increase()
{
    if (_minute < 59)
    {
        _minute += 1;
    }
    else
    {
        _minute = 0;
        if (_hour < 23)
        {
            _hour++;
        }
        else
        {
            _hour = 0;
        }
    }
}
void Time::Show()
{
    if (_hour == 0)
    {
        cout << "00:";
    }
    else
    {
        cout << _hour << ":";
    }
    if (_minute == 0)
    {
        cout << "00" << endl;
    }
    else if (_minute < 10)
    {
        cout << "0" << _minute << endl;
    }
    else
    {
        cout << _minute << endl;
    }
}

int main()
{
    Time t;
    t.Set(14,55);
    cout << "Time is: ";
    t.Show();
    cout << "For 10 minutes: " << endl;
    for (int i = 0; i < 10; i++)
    {
        t.Increase();
        t.Show();
    }


   int h = 5, i = 6;
    B obj1, obj2;
    obj1.Assign(1, 3);
    obj2.Assign(2, 4);
    a = obj1.Fund(h, i);
    cout << h << " " << a << endl;
    i = obj2.Fund(h);
    cout << h << " " << i << endl;

    A a[3];
    int x, y;
    cout << "x*x+2*x*y+y*y = ?" << endl;
    for (int i = 0; i < 3; i++)
    {
        a[i].x = i * 2 + 1;
        a[i].y = i + 2;
    }
    for (int i = 0; i < 3; i++)
    {
        x = a[i].x;
        y = a[i].y;
        cout << x << "*" << x << "+2*" << x << "*" << y << "+"
            << y << "*" << y << "=" << a[i].F2() << endl;
    }



}
