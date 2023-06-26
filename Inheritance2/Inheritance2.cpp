#include <iostream>
using namespace std;

class A { //superclass
protected:
    int z;
public:
    int x;
    void AssignX(int _x) { x = _x; }
    int TakeX() { return x; }
    A(int _x) { x = _x; }
    ~A() { cout << "A's destruction func." << endl; }
};

class B : public A { //subclass
    int n;
    int y;
public:
    B(int _x, int _y) : A(_x) { y = _y; }
    ~B() { cout << "B's destructor func." << endl; 
    system("pause");}
    void AssignN(int _n) { n = _n; }
    int TakeN() { return n; }
    void Print();
};
void B::Print()
{
    cout << x << " " << y << endl;
}

class Person
{
protected:
    string name, surname;
public:
    Person(string _name, string _surname) :name(_name), surname(_surname){}
    void PrintProfile();
};
void Person::PrintProfile()
{
    cout << "Name: " << name << endl;
    cout << "Surname: " << surname << endl;
}
class Student : public Person{
    int _studentNo;
    float _average;
public:
    Student(string, string, int, float);
    float GetAverage();
    
};
Student ::Student(string _name, string _surname, int studentNo,
    float average) :Person(_name, _surname),
    _studentNo(studentNo),
    _average(average) {}
float Student::GetAverage()
{
    return _average;
}
int main()
{
    B obj(3,4);
    /*obj.AssignX(3);
    obj.AssignN(4);
    cout << "x:" << obj.TakeX() << endl;
    cout << "n:" << obj.TakeN() << endl;
    obj.Print();*/
    
    Person person("John", "Black");
    Student student("Alicia", "Parker", 112, 3.4);
    person.PrintProfile();
    student.PrintProfile();
    cout << "Average" << student.GetAverage() << endl;

}
