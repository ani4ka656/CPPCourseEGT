#include "Circle.h"

Circle::Circle(string color_, string name_) : Shape(color_), name(name_)
{
}

string Circle::getName() const
{
    return this->name;
}

void Circle::draw() const
{
    /*it has two possible ways
    Shape::draw();
     cout << " " << getName() << endl;*/
    cout << "Drawing a " << Shape::color /*or only color*/ << " " << getName();
}
