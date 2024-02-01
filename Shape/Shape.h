#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
private:
    int a;
public:
    //Shape();
    Shape(int);
    virtual double getArea() const;
    virtual void print() const;
    void setA(int);
    int getA() const;
};

#endif // SHAPE_H

