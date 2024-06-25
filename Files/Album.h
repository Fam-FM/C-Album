//******************************************************
// File: Album.h
//
// Purpose: Header file that declares the function 
//			prototypes for the Album class
//
// Written By: Frankie Maldonado
//
// Compiler: Visual C++ 2017 Community Edition
// 
// Update Information
// ------------------
// 
//             
//******************************************************

#ifndef ALBUM
#define ALBUM

#include "Artist.h"
#include "Song.h"
#include <fstream>
#include <iostream>
#include <iomanip>

class Album
{
private:
	string Title;
	Artist a_Artist;
	Song s_Song[6];

public:
	Album();

	string getTitle();

	void setTitle(string newTitle);

	Time CalcTotalTime();
	void Read(string inputfilename);
	void Write(string outputfilename);
	void Display();
};

#endif 
