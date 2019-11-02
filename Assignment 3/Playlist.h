#pragma once
#include <iostream>
#include <string>
#include "Music.h"

using namespace std; 

class Playlist 
{
protected:
	Music plist[100]; 
	int listsize;

public: 
	Playlist();
	int addSong(); 
	void displayList(); 
	bool isDuplicateEntry(Music playlist); 
};
