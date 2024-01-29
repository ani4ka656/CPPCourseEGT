#ifndef CIRCLE_H
#define CIRCLE_H
#include "TwoDimShape.h"
class Circle : public TwoDimShape
{
public:
   // Circle(int, int, string, double, string = "Circle");
   Circle(int, string, double, string = "Circle");
    virtual double getArea() const;
    virtual void print() const;

private:
    int r;

};


#endif // CIRCLE_H
