#ifndef FAN_H
#define FAN_H


class Fan
{

public:
	bool on; //tells whether fan is on 
	double radius; //radius of fan
	int speed;//speed of fan
	Fan() //no-arg constructor
	{
		//default settings
		speed = 1;
		on = false;
		radius = 5;
	}

	//set up functions
	int getSpeed()
	{
		return speed;
	}
	//set new speed
	void setSpeed(int newspeed)
	{
		speed = newspeed;
	}
	//functions for radius
	double getRadius()
	{
		return radius;
	}
	//set new radius
	void setRadius(double newradius)
	{
		radius = newradius;
	}

	//function to turn on fan
	bool turnOn()
	{
		return on;
	}

	void setOn(bool turnOn)
	{
		on = turnOn;
	}
};
#endif 
