#include <iostream>
using namespace std;

class Instrument {
protected:
    string name;
public:
    Instrument(string _name): name(_name){}
    virtual void Play() = 0;
};

class Guitar : public Instrument{
public:
    Guitar():Instrument("Guitar"){}
    void Play(string piece);
};
void Guitar::Play(string piece)
{
    cout << "Guitar concerto in D" << endl;
}

class Violin : public Instrument {
public:
    Violin() :Instrument("Violin") {}
    void Play(string piece);
};
void Violin::Play(string piece)
{
    cout << "Violin Sonata" << endl;
}

class Piano : public Instrument {
public:
    Piano() :Instrument("Piano") {}
    void Play(string piece);
};
void Piano::Play(string piece)
{
    cout << "‘Moonlight’ Sonata" << endl;
}

class Orchestra {
public:
    Instrument* instruments[5];
    static int x;
public:
    void AddInstrument(Instrument* e);
    void Play(string piece);
};
void Orchestra::AddInstrument(Instrument* e)
{
    instruments[x] = e;
    x++;
}
void Orchestra::Play(string piece)
{
    for (int i = 0; i < x; i++)
    {
        Instrument* e = instruments[i];
        //e->play(piece);
    }
}
int Orchestra::x = 0;

int main()
{
    Orchestra orchestra;
    
}
