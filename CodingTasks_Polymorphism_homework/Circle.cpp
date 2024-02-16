#include "Circle.h"

Circle::Circle(string color_, double radius_) : Shape(color_), radius(radius_){}

double Circle::getRadius() const
{
    return this->radius;
}

void Circle::draw() const
{
    /*it has two possible ways
    Shape::draw();
     cout << " " << " circle" << endl;*/
    cout << "Drawing a " << Shape::color /*or only color*/ << " circle";
}

double Circle::area() const
{
   return getRadius() * getRadius() * 3.14;
}
