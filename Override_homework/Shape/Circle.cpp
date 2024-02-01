#include "Circle.h"


//Circle::Circle(int a, int b, string position, double sizeShape, string name): TwoDimShape(a,b, position, sizeShape, name) {}
Circle::Circle(int r, string position, double sizeShape, string name): TwoDimShape(r, position, sizeShape, name) {}

double Circle::getArea() const
{
    cout<<"The area is of the Circle is here: ";
    double pi = 2*acos(0.0);
    return this->getA() * this->getA() * pi;
}
void Circle::print() const
{
    cout << "This is the Circle print" << endl;
    cout << this->getName() << endl;
    cout << this->getA() << endl;
    //cout << this->getB() << endl;
    cout << this->getPosition() << endl;
    cout << this->getSize() << endl;
    cout << this->getArea() << endl;



}
