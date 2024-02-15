#include "Rectangle.h"
Rectangle::Rectangle(int a, int b,std::string name) : Shape(a), b(b), name(name) {}

void Rectangle::draw() const {
    cout << "Name of shape is:" << getName() << endl;
    cout << "Side a is:" << getA() << endl;
    cout << "Side b is:" << getB() << endl;
}
void Rectangle::setB(int side)
{
    this->b = side;
}

int Rectangle::getB() const
{
    return this->b;
}
string Rectangle::getName() const
{
    return this->name;
}