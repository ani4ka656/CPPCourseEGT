#include "Circle.h"
Circle::Circle(int r, std::string name) : Shape(r), name(name) {}

void Circle::draw() const {
    cout << "Name of shape is:" << getName() << endl;
    cout << "Side a is:" << getA() << endl;
}

string Circle::getName() const
{
    return this->name;
}