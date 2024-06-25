#include "Artist.h"
#include "Song.h"
#pragma once
#include <fstream>
#include <iostream>
#include <iomanip>

class Album
{
private:
	string Title;
	Artist a_Artist;
	Song *Songs;


public:
	Album();
	Album(const Album& rhs); // copy constructor
	~Album(); // destructor 
	Album& operator=(Album& rhs); // operator overload
	friend ostream& operator << (ostream& os, Album& rhs); // ostream operator overload

	string getTitle();

	void setTitle(string newTitle);

	Time CalcTotalTime();
	void Read(string inputfilename);
	void Write(string outputfilename);
	void Display();
};
