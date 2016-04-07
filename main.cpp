//////////////////////////
//Geometry: The Rectangle
//Nathan Mumford
//April 5, 2016
//CS172
//////////////////////////

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    //define the rectangles
    Rectangle2D r1(2, 2, 5.5, 4.9); 
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    
    cout << "The area of Rectangle 1 is " << r1.getArea(5.5, 4.9) << endl;
    cout << "The perimeter of Rectangle 1 is " << r1.getPerimeter(5.5, 4.9) << endl;
    
cout << "Does Rectangle 1 contain the point (3, 3)? " << endl; //Test if the bool resulted in true or false
    if(r1.contains(3, 3))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
cout << "Does Rectangle 1 contain Rectangle 2? " << endl;
    if(r1.contains(r2)) //Test if the bool resulted in true or false
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    
cout << "Does Rectangle 1 overlap with Rectangle 3? " << endl; //Test if the bool resulted in true or false
    if(r1.overlaps(r3))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}