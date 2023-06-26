#include <iostream>
using namespace std;

class Flower
{
protected: //protected value can be used in inherited class, ex. rose.
		int amount;
public:
	string name;
	string color;
	virtual void Bloom() = 0; //virtual method
	
};
class Rose: public Flower
{
public:
	bool thorn;
	void Bloom() //polymorphism
	{
		cout << "Rose has been bloomed." << endl;
		cin >> amount; 
		cout << "Rose amount is : " << amount << endl;
	}
	void Wither()
	{
		cout << "Rose has been withered." << endl;
	}
};
class Orchid: public Flower
{
public:
	long species = 28000;
	void Bloom() //polymorphism
	{
		cout << "Orchid has been bloomed." << endl;
	}
	void Wither()
	{
		cout << "Orchid has been withered." << endl;
	}

};
class Tulip: public Flower
{
public:
	bool symmteric;
	void Bloom() //polymorphism
	{
		cout << "Tulip has been bloomed." << endl;
	}
	void Wither()
	{
		cout << "Tulip has been withered." << endl;
	}
};
void Test(Rose& rose, Rose* rosePtr)
{

}
//casting example
void Show(Flower* flowerPtr)
{
	cout << flowerPtr->name << endl;
}
//virtual method
void Bloom(Flower* flowerPtr)
{
	flowerPtr->Bloom();
}
int main()
{
	Rose rose;
	rose.Wither();

	Tulip tulip;
	Orchid orchid;

	//Rose* rosePtr = &rose;//pointer
	//rosePtr->name = "test";
	//rosePtr->Bloom();

	//Rose& roseRef = rose; //reference
	//rose.name = "test";
	//test(rose, &rose);

	//upcasting
	Flower* flwPtr = &rose;
	flwPtr->name = "leucothoe";

	cout << rose.name << endl;
		
	//downcasting
	/*Flower flower;
	flower.name = "leucothoe";
	flower.color = "green";

	Rose* rosePtr = (Rose*)&flower;
	cout << rosePtr->name << endl;
	
	rose.name = "rose";
	Show(&rose);

	Tulip tulip;
	tulip.name = "tulip";
	Show(&tulip);*/

	Bloom(&rose);
	Bloom(&tulip);
	Bloom(&orchid);


}

