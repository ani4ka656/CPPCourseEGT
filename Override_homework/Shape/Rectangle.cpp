#include "Rectangle.h"

Rectangle::Rectangle(int a, int b, string position, double sizeShape, string name): TwoDimShape(a, position, sizeShape, name), b(b) {}

double Rectangle::getArea() const
{
   cout<<"The area is of the rectangle is here: ";
    return this->getA() * this->b;
}
void Rectangle::print() const
{
    cout << "This is the rectangle print" << endl;
    cout << this->getName() << endl;
    cout << this->getA() << endl;
    cout << this->getB() << endl;
    cout << this->getPosition() << endl;
    cout << this->getSize() << endl;
    cout << this->getArea() << endl;



}

void Rectangle::setB(int b){
    this->b = b;
}
double Rectangle::getB() const{
    return this->b;
}
