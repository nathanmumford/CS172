//Fan Class
//Nathan Mumford
//CS172
//2/22/16

#include <iostream>
#include "fan.h"

using namespace std;

int main()
{
	Fan fan1;
	Fan fan2;

	//characteristics of Fan 1
	int speed1 = 3;
	fan1.setSpeed(speed1);

	double radius1 = 10;
	fan1.setRadius(radius1);

	bool on1 = true;
	fan1.setOn(on1);
	std::cout << std::boolalpha;
	

	//characteristics of Fan 2
	int speed2 = 2;
	fan2.setSpeed(speed2);

	double radius2 = 5;
	fan2.setRadius(radius2);

	bool on2 = false;
	fan2.setOn(on2);
	



	cout << "The speed of Fan 1 is " << fan1.speed << endl;
	cout << "The radius of Fan 1 is " << fan1.radius << endl;
	cout << "Fan 1 is on:  " << fan1.on << endl;

	cout << "The speed of Fan 2 is " << fan2.speed << endl;
	cout << "The radius of Fan 2 is " << fan2.radius << endl;
	cout << "Fan 2 is on: " << fan2.on << endl;

	return 0;
}