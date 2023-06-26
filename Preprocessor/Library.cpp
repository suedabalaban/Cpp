#include "Library.h"
Math::Math(int a, int b): a(a), b(b)
{

}
int Math::Multiply()
{
	return this->a * this->b;
}
int Multiply(int a, int b)
{
	return a * b;
}