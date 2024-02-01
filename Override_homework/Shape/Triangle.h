#ifndef TRIANGLE_H
#define TRIANGLE_H


#include "TwoDimShape.h"
class Triangle : public TwoDimShape
{
public:
    Triangle(int, int, string, double, string = "Triangle");
    //Triangle(int, string, double, string = "Triangle");
     void setH(int);
    double getH() const;
    virtual double getArea() const;
    virtual void print() const;

private:
    int h;


};


#endif // TRIANGLE_H
