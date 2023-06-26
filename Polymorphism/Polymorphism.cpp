#include <iostream>
using namespace std;

class A {
public:
	A() { cout << "A" << endl; }
	virtual ~A() { cout << "A is destroyed." << endl; 
	system("pause");
	}
	virtual void F();
};
void A::F()
{
	cout << "A" << endl;
}

class B : public A {
public:
	B() { cout << "B" << endl; }
	virtual ~B() {
		cout << "B is destroyed." << endl;
		system("pause");
	}
	void F();
};
void B::F()
{
	cout << "B" << endl;
}

class C :public A{
public:
	void F();
};
void C::F()
{
	cout << "C" << endl;
}

class Shape {
public:
	virtual double Area() { return 0; }//virtual
};

class Circle : public Shape {
protected:
	int radius;
public:
	Circle(int _radius) :radius(_radius){}
	double Area();
};
double Circle::Area()
{
	return (radius * radius * 3.14);
}

class Square : public Shape
{
protected:
	int side;
public:
	Square(int _side):side(_side){}
	double Area();
};
double Square::Area()
{
	return side * side;
}
int main()
{
	/*A* p = new B;
	p->f();
	p = new C; 
	p->f();
	delete p;*/

	A* aPtr = new B();
	delete aPtr;

	Circle circle(10);
	Square square(5);
	Shape* shapePtr = &circle;
	cout << "Area(Circle) = " << shapePtr->Area() << endl;
	shapePtr = &square;
	cout << "Area(Square) = " << shapePtr->Area() << endl;
}