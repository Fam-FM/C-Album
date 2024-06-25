#include <ostream>
#pragma once
using namespace std;

class Time
{
private:
	int Minutes;
	int *Seconds;

public:
	Time();
	Time(const Time& rhs); // copy constructor
	~Time(); // destructor 
	Time& operator=(Time& rhs); // operator overload
	friend ostream& operator << (ostream& os, Time& rhs); // ostream operator overload

	int getMinutes();
	int getSeconds();

	void setMinutes(int newMinutes);
	void setSeconds(int newSeconds);
};
