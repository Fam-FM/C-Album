#include "Time.h"
#include <iostream>
#include <string>
#pragma once
using namespace std;

class Song
{
private:
	string t_Title;
	Time *t_Time;

public:
	Song();
	Song(const Song& rhs); // copy constructor
	~Song(); // destructor 
	Song& operator=(Song& rhs); // operator overload
	friend ostream& operator << (ostream& os, Song& rhs); // ostream operator overload

	string getTitle();
	Time getTime();

	void setTitle(string newTitle);
	void setTime(int a, int b);
};
