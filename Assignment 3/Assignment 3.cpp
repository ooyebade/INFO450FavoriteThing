#include <iostream>
#include <string>
#include "Music.h"
#include "Playlist.h"

using namespace std; 

void instructions(); 
void tellUserStuff(); 

int main()
{
	Music myMusic;
	Playlist myList; 
	instructions();
	char answer; 

	do
	{
		myList.addSong(); 

		tellUserStuff();

		cin >> answer;
		
		cout << endl;
		cin.clear();
		cin.ignore(); 
	} while (answer == 'Y');

	myList.displayList(); 

	return 0; 
}

void instructions()
{
	cout << "**" << "  ********************  " << "**" << endl;
	cout << "**" << "                        " << "**" << endl;
	cout << "**" << "     Keep a list        " << "**" << endl;
	cout << "**" << "    of your favorite    " << "**" << endl;
	cout << "**" << "         Music!!!       " << "**" << endl;
	cout << "**" << "                        " << "**" << endl;
	cout << "**" << "     You can enter:     " << "**" << endl;
	cout << "**" << "    Song Title, Artist  " << "**" << endl;
	cout << "**" << "    Name, Song Genre,   " << "**" << endl;
	cout << "**" << "    Star Rating, and    " << "**" << endl;
	cout << "**" << "       Song Length      " << "**" << endl;
	cout << "**" << "                        " << "**" << endl;
	cout << "**" << "  ********************  " << "**" << endl;
	cout << endl;
	cout << endl;
}

void tellUserStuff()
{
	cout << endl;
	cout <<  "*********************" <<  endl;
	cout << endl;
	cout << "Would you like to add another Music Playlist? Y for Yes" << endl;
	cout << endl;
	cout <<  "*********************" << endl;
}