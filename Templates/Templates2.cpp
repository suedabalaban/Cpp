#include <iostream>
using namespace std;

//function template
template <class T> 
T Add(T val1, T val2)
{
    return val1 + val2;
}
template <class A>
A TheBiggest(A first, A second)
{
	if (first > second)
	{
		return first;
	}
	else
	{
		return second;
	}
}
template <class A>
A TheBiggest(A first, A second, A third)
{
	return theBiggest(theBiggest(first, second), third);
}

//class template
template <class T>
class Operation
{
	T x, y;
public:
	Operation(T _x, T _y) :x(_x), y(_y0){}
	T SmallNumber();
};
template <class T>
T Operation<T>::SmallNumber()
{
	if (x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
template <class T1, class T2>
class Operation2
{
	T1 _x;
	T2 _y;
public:
	Operation2(T1 x, T2 y) : _x(x), _y(y);
	T2 Add();
};
template <class T1, class T2>
T2 Operation2<T1,T2>::Add()
{
	return _x + _y;
}
template <class T, int N>
class Operation3
{
	T _array[N];
public:
	void AddMember(int i, T member);
	T TakeMember(int i);
};
template <class T, int N>
void Operation3<T, N>::AddMember(int i, T member)
{
	_array[i] = member;
}
template <class T, int N>
T Operation3<T, N>::TakeMember(int i)
{
	return _array[i];
}
template <class T>
class Process
{
	T _number;
public:
	Process(T number) : _number(number){}
	T Increase()
	{
		return _++number;
	}
};
//template specialization
template <>
class Process<char>
{
	char _ch;
public:
	Process(char ch): _ch(ch){}
	char UpperCase()
	{
		if ((_ch>='a') && (_ch<='<'))
		{
			_ch += -32; //'A' - 'a' = -32
			return _ch;
		}
	}
};
int main()
{
	cout << TheBiggest(5.5, 8.2) << endl;
	cout << TheBiggest(10, 20, 30) << endl;

	Operation <int> operation1(100, 75);
	cout << operation1.SmallNumber() << endl;

	Operation2 <int, double> operation2(8, 5.30);
	cout << operation2.Add() << endl;

	Operation3 <int, 5> operation3;
	Operation3 <double, 10> operation4;
	operation3.AddMember(0, 100); //assigns 100 to the 1st member of the array.
	operation4.AddMember(3, 6.9); ////assigns 6.9 to the 3rd member of the array.
	cout << operation3.TakeMember(0) << endl;
	cout << operation4.TakeMember(3) << endl;

	Process <int> process(5);
	Process <char> process2('e');
	cout << process.Increase() << endl;
	cout << process2.UpperCase() << endl;
		
	
}
