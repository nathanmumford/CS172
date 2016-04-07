#include <iostream>
#include "Header.h"
using namespace std;

Rectangle2D::Rectangle2D() //no arg constructor
{
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double width, double height) //second constructor
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
}

double Rectangle2D::getx() const //get x method
{
    return x;
}

double Rectangle2D::gety() const //get y method
{
    return y;
}

double Rectangle2D::getwidth() const //get width method
{
    return width;
}

double Rectangle2D::getheight() const //get height method
{
    return height;
}

void Rectangle2D::setx(double X) //set x to X
{
    x = X;
}

void Rectangle2D::sety(double Y) //set y to newy
{
    y = Y;
}

void Rectangle2D::setwidth(double W) //set width to new width
{
    width = W;
}

void Rectangle2D::setheight(double H) //set height to new height
{
    height = H;
}

double Rectangle2D::getArea(double newwidth, double newheight) const //get the area of the rectangle
{
    double area = newwidth * newheight;
    return area;
}

double Rectangle2D::getPerimeter(double newwidth, double newheight) const //get the perimeter of the rectangle
{
    double perimeter = (2 * newwidth) + (2 * newheight);
    return perimeter;
}

bool Rectangle2D::contains(double x1, double y1) const //test to see if point is inside rectangle
{
    if (x1 > (this->x - .5 * this->width) && x1 < (this->x + .5 * this->width) && y1 > (this->y - .5 * this->height) && y1 < (this->y + .5 * this->height)) //Test to see if point is inside other rectangle
        return true;
    else
        return false;
    
}

bool Rectangle2D::contains(const Rectangle2D &r)
{
    double top = r.gety() + r.getheight() / 2; //top of rectangle
    double bottom = r.gety() - r.getheight() / 2; //bottom of rectangle
    double right = r.getx() + r.getwidth() / 2; //right side
    double left = r.getx() - r.getwidth() / 2; // left side
    
    if( right <= (this->x + .5 * width) && left >= (this->x - .5 * width) && top <= (this->y + .5 * height) && bottom >= (this->y - .5 * height)) //Test to see if rectangle is inside other rectangle
        return true;
    else
        return false;
}


bool Rectangle2D::overlaps(const Rectangle2D &r)
{
    double top = r.gety() + r.getheight() / 2; //top of rectangle
    double bottom = r.gety() - r.getheight() / 2; //bottom of rectangle
    double right = r.getx() + r.getwidth() / 2; //right side
    double left = r.getx() - r.getwidth() / 2; // left side
    
    if( right <= (this->x + .5 * width) && left >= (this->x - .5 * width) && top <= (this->y + .5 * height) && bottom >= (this->y - .5 * height)) //Test to see if rectangle is inside other rectangle
        return false;
    
    if(((right < (this->x + .5 * width)) || (left > (this->x - .5 * width))) && (top < (this->y + .5 + height) || bottom > (this->y - .5 * height))) //Test to see if the rectangles overlap
        return true;
    else
        return false;
}

