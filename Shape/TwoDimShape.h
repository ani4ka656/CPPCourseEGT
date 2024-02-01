#ifndef TWODIMSHAPE_H
#define TWODIMSHAPE_H
#include "Shape.h"
class TwoDimShape : public Shape
{
    private:
      //  int b;
    public:
        TwoDimShape(int);
        //void setB(int);
       // double getB() const;
        virtual double getArea() const;
        virtual void print() const;

};

#endif // TWODimSHAPE_H
