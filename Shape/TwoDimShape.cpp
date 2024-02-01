#include "TwoDimShape.h"
TwoDimShape::TwoDimShape(int a): Shape(a){}
double TwoDimShape::getArea() const {
    cout << "In TwoDimShape getArea area" << endl;
    return 0.0;
}
void TwoDimShape::print() const {
    cout<< "In TwoDim print"  << endl;
}
