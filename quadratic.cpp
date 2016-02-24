//////////////////////////
//quadratic equation
//Nathan Mumford
//CS172 section 1
//2/23/16
/////////////////////////

#include <iostream>
#include "quadratic.h"
#include <cmath>

using namespace std;

int main()
{
	int x;
	int y;
	int z;

//prompt user for values
		cout << "Please enter a value for a: ";
		cin >> x;
		cout << "Please enter a value for b: ";
		cin >> y;
		cout << "Please enter a value for c: ";
		cin >> z;

		quadraticequation quad1; //grab from header file
		if (quad1.getDiscriminant(x, y, z) == 0) //test if the discriminant function returns 0
			cout << "The equation has no real roots" << endl;
		else //if positive, run through the root functions
		{
			cout << quad1.getRoot1(x, y, z) << endl;
			cout << quad1.getRoot2(x, y, z) << endl;		
		}

	
}