#include <iostream>
using namespace std;

class Calculation
{
public:
    int height;
    int width;
    int area;
    void Input()
    {
        cout << "Input height: ";
        cin >> height;
        cout << "Input width: ";
        cin >> width;
    }
    void Calculate()
    {
        area = height * width;
        cout << area << endl ;
    }
};

//constructor and destructor methods
class Payment{
private:
    float _cost; //encapsulation
public:
    string currency;
    string hashCode = "21546835";
    void SetCost(float c) //encapsulation
    {
        if (c>0)
        {
            _cost = c;
        }
        else
        {
            _cost = 0.1;
        }
    }
    Payment(bool f, string a)
    {
        _cost = 1, 2;
        currency = "tl";
        cout << a << endl;
    }
    Payment()
    {

    }
    ~Payment() //destructor sign ~
    {
        cout << "Finished." << endl;
    }
    void Pay()
    {
        cout << _cost << "Payment recieved." << endl;
    }
};

int main()
{
    Calculation result;
    result.Input();
    result.Calculate();

    Payment purchase;
    purchase.SetCost(10.23);
    purchase.currency = "tl";
    purchase.Pay();

    Payment purchase1(true, "constructor");
    purchase1.Pay();
    return 0;
}