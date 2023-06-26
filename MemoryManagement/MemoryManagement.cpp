#include <iostream>
using namespace std;

class Flower {
public:
    Flower()
    {
        cout << "Created." << endl;
    }
    ~Flower()
    {
        cout << "Deleted." << endl;
    }
};

class Food {
public:
    int s{};
    Food()
    {
        cout << "Created." << endl;
    }
    ~Food()
    {
        cout << "Deleted." << endl;
    }
};

class Math {
public:
    int* a = nullptr;
    int* b = nullptr;
    Math(int number1, int number2)
    {
        a = new int;
        b = new int;
        *a = number1;
        *b = number2;
    }
    ~Math()
    {
        delete a;
        delete b;
        cout << "Deleted" << endl;
    }
};

int main()
{
    /*int* x = new int;
    *x = 10;
    delete x;

    Flower* flower = new Flower;
    delete flower;

    int amount = 0;
    cout << "Determine the length of the array: ";
    cin >> amount;

    int* array = new int[amount];

    for (int i = 0; i < amount; i++)
    {
        cout << "Input the array member:";
        cin >> array[i];
    }
    for (int i = 0; i < amount; i++)
    {
        cout << array[i] << endl;
    }

    delete[] array;

    Math* math = new Math(2, 4);
    delete math;*/

    Food* food = new Food;

    shared_ptr<Food> foodPtr = make_shared<Food>();

    cout << foodPtr->s << endl;

    cout << foodPtr.get();
}

