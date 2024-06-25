#include "Artist.h"
#include <stdio.h>

Artist::Artist()
{

	Name = new string;
	Countryoforigin = "None";
}

Artist::Artist(const Artist& rhs)
{
	Name = new string(*rhs.Name);
	Countryoforigin = string(rhs.Countryoforigin);
}

Artist::~Artist()
{
	cout << "Destructor called" << endl;
	Name = NULL;
	delete Name;

}

Artist& Artist::operator=(const Artist &rhs)
{
	Name = new string(*rhs.Name);
	Countryoforigin = string(rhs.Countryoforigin);
	return *this;
}

ostream& operator << (ostream& os, const Artist& rhs)
{
	os << *rhs.Name << endl;
	os << rhs.Countryoforigin << endl;
	return os;
}

string Artist::getName()
{
	return *Name;
}

string Artist::getCountryoforigin()
{
	return Countryoforigin;
}

void Artist::setName(string newName)
{
	Name = &newName;
}

void Artist::setCountryoforigin(string newCountryoforigin)
{
	Countryoforigin = newCountryoforigin;
}
