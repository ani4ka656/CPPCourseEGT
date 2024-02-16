#include "Rectangle.h"

Rectangle::Rectangle(string color_) : Shape(color_){}

void Rectangle::draw() const
{
    /*it has two possible ways
    Shape::draw();
    cout << " " << " rectangle" << endl;*/
    cout << "Drawing a " << Shape::color /*or only color*/ << " rectangle";
}
