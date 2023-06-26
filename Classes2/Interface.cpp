#include <iostream>
using namespace std;

class Animals //interface
{
public:
	virtual void Voice() = 0;
};
class Dog : public Animals
{
public:
	void Voice()
	{
		cout << "Woof" << endl;
	}
};
class Cat : public Animals
{
public:
	void Voice()
	{
		cout << "Meow" << endl;
	}
};
class Duck : public Animals
{
public:
	void Voice()
	{
		cout << "Quack" << endl;
	}
};
void VoiceAll(Animals* aPtr)
{
	aPtr->Voice();
}

int main()
{
	Dog puppy;
	Cat kitten;
	Duck duckling;

	VoiceAll(&puppy);
	VoiceAll(&kitten);
	VoiceAll(&duckling);
}
