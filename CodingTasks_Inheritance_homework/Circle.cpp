#include "Circle.h"

Circle::Circle(string color_) : Shape(color_){}

void Circle::draw() const
{
    /*it has two possible ways
    Shape::draw();
     cout << " " <<  " circle" << endl;*/
    cout << "Drawing a " << Shape::color /*or only color*/ << " circle";
}
