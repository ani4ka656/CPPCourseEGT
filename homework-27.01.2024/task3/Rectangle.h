#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "TwoDimShape.h"

class Rectangle : public TwoDimShape
{

public:
    Rectangle(int, int, string, double, string = "Rectangle");
    void setB(int);
    double getB() const;
    virtual double getArea() const;
    virtual void print() const;
private:
    int b;

};

#endif // RECTANGLE_H
