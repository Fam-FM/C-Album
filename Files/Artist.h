#pragma once
#include <iostream>
#include <string>
using namespace std;

class Artist
{
private:
	string *Name;
	string Countryoforigin;

public:
	Artist(); // constructor
	Artist(const Artist& rhs); // copy constructor
	~Artist(); // destructor 
	Artist& operator=(const Artist& rhs); // operator overload
	friend ostream& operator << (ostream& os, const Artist& rhs); // ostream operator overload

	string getName();
	string getCountryoforigin();

	void setName(string newName);
	void setCountryoforigin(string newCountryoforigin);
};
