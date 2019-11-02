#include <iostream>
#include <string>
#include "Music.h"
#include "Playlist.h"

using namespace std;

//constructor
Playlist::Playlist()
{
	listsize = 0; 
}

bool Playlist::isDuplicateEntry(Music playlist)
{
	int i;
	for (i = 0; i < listsize; i++)
	{
		if ((playlist.getSongTitle() == plist[i].getSongTitle()) && (playlist.getArtistName() == plist[i].getArtistName()))
		{
			return true; 
		}
	} 
	return false; 
}

int Playlist::addSong()
{
	Music newPlaylist;
	newPlaylist.addSongLibrary(); 
	if (isDuplicateEntry(newPlaylist))
	{
		cout << "You have already entered a Music with this song title and artist name" << endl; 
		newPlaylist.~Music();
		return 0;
	}
	else
	{
		plist[listsize] = newPlaylist;
		listsize++; 
		return 0; 
	}
}

// displays every object in array
void Playlist::displayList()
{
	int i;
	for (i = 0; i < listsize; i++)
	{
		cout << plist[i] << endl; 
		cout << endl; 
	}
}
