#include "Rectangle.h"

Rectangle::Rectangle(string color_, double width_, double height_) : Shape(color_), width(width_), height(height_){}

double Rectangle::getWidth() const
{
    return this->width;
}

double Rectangle::getHeight() const
{
    return this->height;
}

void Rectangle::printArea() const
{
    cout << "Area of the rectangle is: " << getWidth() * getHeight() << endl;
}

void Rectangle::draw() const
{
    /*it has two possible ways
    Shape::draw();
    cout << " " << getName() << endl;*/
    cout << "Drawing a " << Shape::color /*or only color*/ << " rectangle";
}
