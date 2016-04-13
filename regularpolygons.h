



#ifndef REGULARPOLYGONS_H
#define REGULARPOLYGONS_H

class RegularPolygon
{
private:
	int n; //number of sides
	double side;//length of side
	double x;//x-coordinate of the center of polygon
	double y;//y-coordinate of the center of polygon
public:
	int numsides;
	double length;
	double X;
	double Y;
	double perimeter;
	double area;
	const double pi = 3.14159;

	RegularPolygon()//no-arg constuctor
	{
		n = 3;
		side = 1;
		x = 0;
		y = 0;
	}

	RegularPolygon(int numsides, double length) //constructor that has a specified number of sides and length of side, centered at (0, 0)
	{
		n = numsides;
		side = length;
		x = 0;
		y = 0;

	}
	
	RegularPolygon(int numsides, double length, double X, double Y)//constructor that allows user to input all the specifications of the polygon
	{
		n = numsides;
		side = length;
		x = X;
		y = Y;
	}

	//get functions for all data fields
	int getn()
	{
		return n;
	}
	double getside()
	{
		return side;
	}
	double getx()
	{
		return x;
	}
	double gety()
	{
		return y;
	}
	double getPerimeter(int n, double side, double x, double y) //returns the perimeter, I know that x and y don't affect outcome, but added it anyways
	{
		perimeter = n * side; //equation to find perimeter
		return perimeter;
	}
	double getArea(int n, double side, double x, double y)//returns the area, I know that x and y don't affect outcome, but added it anyways
	{
		area = (n * pow(side, 2)) / (4 * tan(pi / n)); //equation to find area
		return area;
	}
};
#endif