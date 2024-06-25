#include "Time.h"
#include <iostream>
using namespace std;

Time::Time()
{
	Minutes = 0;
	Seconds = new int(0);
}

Time::Time(const Time& rhs) // copy constructor
{
	Seconds = new int(*rhs.Seconds);
	Minutes = int(rhs.Minutes);
}

Time::~Time() // destructor 
{

	cout << "destructor called" << endl;
	Seconds = NULL;
	delete Seconds;
}

Time& Time::operator=(Time& rhs)
{
	Seconds = new int(*rhs.Seconds);
	Minutes = int(rhs.Minutes);
	return *this;
} // operator overload

ostream& operator << (ostream& os, Time& rhs)
{
	os << rhs.getMinutes() << endl;
	os << rhs.getSeconds() << endl;

	return os;
} // ostream operator overload

int Time::getMinutes()
{
	return Minutes;
}

int Time::getSeconds()
{
	return *Seconds;
}

void Time::setMinutes(int newMinutes)
{
	Minutes = newMinutes;
}

void Time::setSeconds(int newSeconds)
{
	*Seconds = newSeconds;
}
