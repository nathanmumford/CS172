#include <iostream>
#include <cstring>

using namespace std;

//inclusion guard
#ifndef EVENT_H
#define EVENT_H

class event //create the class event
{
	//data fields
private:
	int time;
	string title;
public:
	//function prototypes
	event();
	event(int, string);
	int getTime();
	string getTitle();
	void setTime(int);
	void setTitle(string);





};




#endif

