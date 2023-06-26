#include <iostream>
using namespace std;

void Read(float* g, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "th number: ";
        cin >> g[i];
    }
}
void Print(float* g, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << g[i] << endl;
    }
}

float CalcMax(float* g, int n)
{
    float max = *g;
    for (int i = 0; i < n; i++)
    {
        if (g[i] > max)
        {
            max = g[i];
        }
    }    
    cout << "The highest number is: " << max;
    return max;
}

void Swap(int* x, int* y, int* z)
{
     int a = *z;
     *z = *y;
     *y = a;

     int b = *y;
     *y = *x;
     *x = b;
     
     int c = *x;
     *x = *z;
     *z = c;
}

int main()
{
    int x = 10;
    int y = 30;
    int z = 40;
    
    Swap(&x,&y,&z);
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    float* g;
    int n;
    
    cout << "Input the number amount: ";
    cin >> n;
    g = new float[n];
    Read(g,n);
    Print(g,n);
    CalcMax(g,n);
    delete[] g;
    
    int* myArray = new int[5];
    int* ptr;
    ptr = myArray;
    *ptr = 5;
    ptr++;
    *ptr = 15;
    ptr = &myArray[2];
    *ptr = 20;
    ptr = myArray + 3;
    *ptr = 25;
    ptr = myArray;
    *(ptr + 4) = 30;
    for (int i = 0; i < 5; i++)
    {
        cout << myArray[i] << endl;
    }

    int a = 29;
    int b = 25;

    int* p;
    int* r;
    p = &a;
    r = &b;
    *p = *r + 3;
    *r = *p + 2;

    cout << "x: " << p << endl;
    cout << "*x: " << *p << endl;
    cout << "&x: " << &p << endl;
    cout << "y: " << r << endl;
    cout << "*y: " << *r << endl;
    cout << "&y: " << &r << endl;

}
