//inclusion guard
#ifndef VENUE_H
#define VENUE_H
#include "event.h"



class venue //create new class
{
	//data fields
private:
	event scheduledEvents[12]; //array of type event
	int numEvents;
	bool validTime(int);
public:
	//function prototypes
	void addEvent(int, string);
	event findEvent(int);
	event findEvent(string);

};
#endif
