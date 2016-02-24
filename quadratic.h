#include <iostream>
using namespace std;

#ifndef QUADRATICEQUATION_H
#define QUADRATICEQUATION_H

class quadraticequation
{
public:
	//data fields
	int a;
	int b;
	int c;
	double discriminant;
	double r1;
	double r2;

	//constructor for a, b, c
	quadraticequation()
	{
			a = 2;
			b = 9;
			c = 2;
	}

	//overload contructor
	quadraticequation(int x, int y, int z)
	{
		a = x;
		b = y;
		c = z;
	}

	//get functions
	int getx()
	{
		return a;
	}


	int gety()
	{
		return b;
	}

	int getz()
	{
		return c;
	}
	
	//getDiscriminant() function
	double getDiscriminant(int a, int b, int c)
	{
		discriminant = (b * b) - (4 * a * c);
		if (discriminant >= 0)
		{
			return discriminant;
		}
		else //if discriminant is less than 0, return 0;
		{
			return 0;
		}
		
		
	}

	double getRoot1(int a, int b, int c) //function to find first 
	{
		r1 = (-b + sqrt(discriminant)) / (2 * a); //quadratic formula
		return r1;
	}
	double getRoot2(int a, int b, int c)
	{
		r2 = (-b - sqrt(discriminant)) / (2 * a); //quadratic formula
		return r2;
	}


};
#endif
