///////////////////////////////////////////
//regular polygons
//Nathan Mumford
//March 15, 2016
//CS172 section 1
////////////////////////////////////////////

#include <iostream>
#include "regularpolygons.h"
using namespace std;


//I added in the x and y for the perimeter and area even though it doesn't effect the result.
int main()
{
	//create 3 polygons
	RegularPolygon obj1;
	RegularPolygon obj2;
	RegularPolygon obj3;
	
	//get the values from the default constructor
	int n = RegularPolygon().getn(); 
	double side = RegularPolygon().getside();
	double x = RegularPolygon().getx();
	double y = RegularPolygon().gety();
	//call the getperimeter and getarea methods
	cout << "The no argument constructor produces a polygon with a perimeter of " << obj1.getPerimeter(n, side, x, y) << endl << " and an area of " << obj1.getArea(n, side, 0, 0) << endl;
	
	//Enter in the values given in the problem
	int numsides = 6;
	double lengthside = 4;
	//call the getperimeter and getarea methods
	cout << "A polygon with 6 sides and each side being a length of 4 results in a perimeter of " << obj2.getPerimeter(numsides, lengthside, 0, 0) << endl
		<< " and an area of " << obj2.getArea(numsides, lengthside, 0, 0) << endl;

	//Enter in the values given in the problem
	int numsides2 = 10;
	double lengthside2 = 4;
	double xcoordinate = 5.6;
	double ycoordinate = 7.8;
	//call the getperimeter and getarea methods
	cout << "There is a polygon with 10 sides with each side being a length of 4. The x y coordinates are (5.6, 7.8)." << endl << "The perimeter of this polygon is " 
		<< obj3.getPerimeter(numsides2, lengthside2, xcoordinate, ycoordinate) << endl <<  " and the area is " << obj3.getArea(numsides2, lengthside2, xcoordinate, ycoordinate) << endl;
}