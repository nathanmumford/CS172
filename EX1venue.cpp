//I affirm that all code given below was written solely by me, Nathan Mumford, and that any help I received adhered to the rules stated for this exam.



#include <iostream>
#include <string>
#include "venue.h"







bool venue::validTime(int time)
{
	if (scheduledEvents[time - 1].getTime() == -1) //if the event spot equals -1, the slot is free, so something can be inputed 
	{
		return true;
	}
	else //if it doesn't equal, it is false and nothing can be inputed
		return false;
}

void venue::addEvent(int time, string name)
{
	if (validTime(time) == true) //test to see if the time is free by refering to the bool
	{
		 scheduledEvents[time - 1].setTime(time); //adds the event in the time slot
		 scheduledEvents[time - 1].setTitle(name); //adds the name of the event in the slot
		 cout << "Event scheduled!" << endl; //couts that the event has been scheduled
	}
	else
		cout << "Couldn't schedule event :(" << endl; //if the bool is false, the event is full already so the event could not be scheduled
}

event venue::findEvent(int time)
{
	return scheduledEvents[time - 1]; //finds the events in the array
}

event venue::findEvent(string name)
{
	int count = 0; //counter variable
	while (name != scheduledEvents[count].getTitle() && count <= 11) //while loop to run when name doesn't match something in the array
	{
		if (count != 11) 
			count++;
		else
			break; //prevents loop from continueing to run
	}
	return scheduledEvents[count]; //return the event at the location where it is found in the array
}