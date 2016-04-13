//code copied from assignment sheet 

#include <iostream>
#include <string>
#include "Event.h"
#include "Venue.h"

using namespace std;

int main()
{
	venue theSpot;
	theSpot.addEvent(10, "Coffee Hour");    //Should work
	theSpot.addEvent(11, "Brunch w/ Bob");  //Should work
	theSpot.addEvent(11, "Bingo"); //Shouldn't work

	cout << theSpot.findEvent(10).getTitle() << endl; //Should find Coffee Hour
	cout << theSpot.findEvent("Brunch w/ Bob").getTime() << endl;  //Should find 11 o'clock
	cout << theSpot.findEvent("Bingo").getTime() << endl; //Should print -1, because Bingo ain't there!

	return 0;
}


