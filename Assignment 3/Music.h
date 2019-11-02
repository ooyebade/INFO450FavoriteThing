#pragma once
#include <iostream>
#include <string>
using namespace std;

class Music
{
private:
	string songTitle;
	string artistName;
	string genre; 
	int rating;
	int songLength; 

public: 
	//constructors
	Music();
	~Music(); 

	//getters
	string getSongTitle();
	string getArtistName();
	string getGenre();
	int getRating();
	int getSongLength();

	//setters
	void setSongTitle(string ST);
	void setArtistName(string ArN);
	void setGenre(string g);
	void setRating(int r); 
	void setSongLength(int SL);

	void addSongLibrary();

	friend ostream &operator << (ostream &os, Music &playlist);
	// end class
};