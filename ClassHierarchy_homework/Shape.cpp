#include "Shape.h"

Shape::Shape(int side) : a(side) {}
void Shape::setA(int side)
{
    this->a = side;
}
int Shape::getA() const
{
    return this->a;
}

void Shape::draw() const
{
    std::cout << getA() << std::endl;
}
