#include "Square.h"

//Square::Square(int a, int b, string position, double sizeShape, string name): TwoDimShape(a,b, position, sizeShape, name) {}
Square::Square(int a, string position, double sizeShape, string name): TwoDimShape(a, position, sizeShape, name) {}

double Square::getArea() const
{
   cout<<"The area is of the Square is here: ";
    return this->getA() * this->getA();
}
void Square::print() const
{
    cout << "This is the Square print" << endl;
    cout << this->getName() << endl;
    cout << this->getA() << endl;
    //cout << this->getB() << endl;
    cout << this->getPosition() << endl;
    cout << this->getSize() << endl;
    cout << this->getArea() << endl;



}
