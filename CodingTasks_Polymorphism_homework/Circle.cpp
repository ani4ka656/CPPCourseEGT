#include "Circle.h"

Circle::Circle(string color_, double radius_) : Shape(color_), radius(radius_)
{
}


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

void Circle::area() const
{
    cout << "Area of the circle is: " << getRadius() * getRadius() * 3.14 << endl;
}
