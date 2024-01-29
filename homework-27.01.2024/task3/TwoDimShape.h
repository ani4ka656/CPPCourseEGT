#ifndef TWODIMSHAPE_H
#define TWODIMSHAPE_H
#include "Shape.h"
class TwoDimShape : public Shape
{
private:
    //int b;
    string position;
    double sizeShape;
    string name;
    //fill tr da dobawq ili string fll ili char
public:
  //  TwoDimShape(int, int, string, double, string);
    TwoDimShape(int, string, double, string);
   // void setB(int);
   // double getB() const;
    void setName(string);
    void setPosition(string);
    void setSize(double);
    string getName() const;
    double getSize() const;
    string getPosition() const;
    virtual double getArea() const;
    virtual void print() const;

};

#endif // TWODimSHAPE_H
