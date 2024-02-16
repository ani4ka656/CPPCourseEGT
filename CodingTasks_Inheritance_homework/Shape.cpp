#include "Shape.h"

Shape::Shape(string color_) : color(color_)
{
}

string Shape::getColor() const
{
	return this->color;
}

void Shape::draw() const
{
	/*cout << "Drawing a " << getColor();*/
}
