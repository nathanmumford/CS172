//I affirm that all code given below was written solely by me, Nathan Mumford, and that any help I received adhered to the rules stated for this exam.


#include <iostream>
#include <cstring>
#include <cstdlib>
#include "event.h"






event::event() //default constructor
{
	//default settings
	title = "free";
	time = -1;
}

event::event(int t, string name) //overload constructor
{
	time = t;
	title = name;

}







int event::getTime() //get the time
{
	return time;
}

void event::setTime(int t) //set time with input from main
{
	time = t;
}

string event::getTitle() //get title
{
	return title;
}
void event::setTitle(string name) //set name with input from main
{
	title = name;
}

