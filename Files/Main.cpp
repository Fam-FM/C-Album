#include "Song.h"
#include "Artist.cpp"
#include "Song.cpp"
#include "Time.cpp"
#include "Album.cpp"
#include "Album.h"
#include "Time.h"
#include <iostream>
// #include "Time.cpp"
using namespace std;

int main()
{
	/* Tests for Artist Class */

	// 1. Constructor, set Name, set Country of Origin
	Artist artistA;
	artistA.setName("Test Name");
	artistA.setCountryoforigin("USA");
	//2. Copy Constructor
	Artist artistB = Artist(artistA);

	//3. = Operator
	Artist artistC = artistB;


	//4. getName, getCountryoforigin
	cout << artistA.getName() << endl;
	cout << artistA.getCountryoforigin() << endl;

	//5. << overload
	cout << artistA << endl;
	cout << artistB << endl;
	cout << artistC << endl;

	/* Tests for Time Class */
	// 1. Constructor, setMinutes, setSeconds
	Time timeA;
	timeA.setMinutes(9);
	timeA.setSeconds(15);

	// 2. Copy Constructor
	Time timeB = Time(timeA);

	// 3. = Operator
	Time timeC = timeB;

	// 4. getSeconds, getMinutes
	cout << timeA.getMinutes() << endl;
	cout << timeA.getSeconds() << endl;

	//5. << overload
	cout << timeA << endl;
	cout << timeB << endl;
	cout << timeC << endl;

	/* Tests for Song Class */
	// 1. Constructor, setTime, setTitle
	Song songA;
	songA.setTitle("Test Song Title");
	songA.setTime(9, 15);

	// 2. Copy Constructor
	Song songB = Song(songA);

	//3 . = Operator
	Song songC = songB;

	//4. getTitle, getTime
	cout << songA.getTitle() << endl;
	Time t = songA.getTime();
	cout << t << endl;

	//5. << Overload
	cout << songA << endl;
	cout << songB << endl;
	cout << songC << endl;

	/* Tests for Album Class */
	// 1. Constructor, setTitle, getTitle
	Album albumA;
	albumA.setTitle("Test Album");
	cout << albumA.getTitle() << endl;

	// 2. Album::Read, Album::Write, Album::Display
	albumA.Read("continuedsilence.txt");
	albumA.Write("out.txt");
	// albumA.Display();

	//3. Copy Constructor
	Album albumB = Album(albumA);

	//4. = Operator
	// Album albumC = albumA;

	//5. << overload
	// cout << albumA << endl;
	// cout << albumB << endl;
	// cout << albumC << endl;


	return 0;
}
