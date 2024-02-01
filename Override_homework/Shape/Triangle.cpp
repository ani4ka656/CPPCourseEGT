#include "Triangle.h"

Triangle::Triangle(int a, int h, string position, double sizeShape, string name): TwoDimShape(a, position, sizeShape, name), h(h) {}

double Triangle::getArea() const
{
    cout<<"The area is of the Triangle is here: ";
    return (this->getA() * this->h)/2;
}
void Triangle::print() const
{
    cout << "This is the Triangle print" << endl;
    cout << this->getName() << endl;
    cout << this->getA() << endl;
    cout << this->getH() << endl;
    cout << this->getPosition() << endl;
    cout << this->getSize() << endl;
    cout << this->getArea() << endl;



}
void Triangle::setH(int b){
    this->h = h;
}
double Triangle::getH() const{
    return this->h;
}
