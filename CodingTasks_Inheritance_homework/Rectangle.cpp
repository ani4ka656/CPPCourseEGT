#include "Rectangle.h"

Rectangle::Rectangle(string color_, string name_) : Shape(color_), name(name_){}

string Rectangle::getName() const
{
    return this->name;
}

void Rectangle::draw() const
{
    /*it has two possible ways
    Shape::draw();
    cout << " " << getName() << endl;*/
    cout << "Drawing a " << Shape::color /*or only color*/ << " " << getName();
}
