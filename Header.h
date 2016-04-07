#ifndef Header_h
#define Header_h

class Rectangle2D
{
private:
    //initialize variables
    double x;
    double y;
    double width;
    double height;
    double X;
    double Y;
    double W;
    double H;
    double newx;
    double newy;
    double newwidth;
    double newheight;
    
public:
    //Prototypes for each method
    Rectangle2D();
    Rectangle2D(double, double, double, double);
    double getx() const;
    double gety() const;
    double getwidth() const;
    double getheight() const;
    void setx(double);
    void sety(double);
    void setwidth(double);
    void setheight(double);
    double getArea(double, double) const;
    double getPerimeter(double, double) const;
    bool contains(double, double) const;
    bool contains(const Rectangle2D &r);
    bool overlaps(const Rectangle2D &r);
};
#endif