#include "Song.h"




Song::Song()
{
	Time x;
	x.setMinutes(0);
	x.setSeconds(0);
	t_Time = new Time(x);
	t_Title = "No Title";

}

Song::Song(const Song& rhs)
{
	t_Time = new Time(*rhs.t_Time);
	t_Title = string(rhs.t_Title);
	// *this = rhs;
} // copy constructor

Song::~Song()
{

	cout << "Destructor called" << endl;
	t_Time = NULL;
	delete t_Time;
} // destructor 

Song& Song::operator=(Song& rhs)
{
	t_Time = new Time(*rhs.t_Time);
	t_Title = string(rhs.t_Title);
	return *this;

} // operator overload

ostream& operator << (ostream& os, Song& rhs)
{
	os << rhs.t_Title << endl;
	os << *rhs.t_Time << endl;

	return os;
} // ostream operator overload


string Song::getTitle()
{
	return t_Title;
}

void Song::setTitle(string newTitle)
{
	t_Title = newTitle;
}

Time Song::getTime()
{
	return *t_Time;
}

void Song::setTime(int a, int b)
{
	t_Time->setMinutes(a);
	// t_Time.setMinutes(a);
	t_Time->setSeconds(b);
}
