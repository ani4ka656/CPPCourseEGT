#ifndef SQUARE_H
#define SQUARE_H
#include "TwoDimShape.h"
class Square : public TwoDimShape
{
public:
    //Square(int, int, string, double, string = "Square");
    Square(int, string, double, string = "Square");

    virtual double getArea() const;
    virtual void print() const;

protected:


};

#endif // SQUARE_H
