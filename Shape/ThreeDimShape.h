#ifndef THREEDIMSHAPE_H
#define THREEDIMSHAPE_H
#include "Shape.cpp"

class ThreeDimShape : public Shape
{
    public:
        ThreeDimShape(int, int);
        virtual double getArea() const;
        virtual void print() const;
        double getVolume() const;
    private:
        int h;
};

#endif // ThreeDimSHAPE_H
