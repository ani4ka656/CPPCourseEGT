#include "ThreeDimShape.h"

ThreeDimShape::ThreeDimShape(int a, int h) : Shape(a), h(h){}

double ThreeDimShape::getArea() const {
    cout << "In ThreeDim Shape getArea area" << endl;
    return 0.0;
}
void ThreeDimShape::print() const {
    cout<< "In ThreeDim print" << endl;
}

double ThreeDimShape::getVolume() const {
    cout << "In ThreeDim Shape getVolume volume" << endl;
    return 0.0;
}

