#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
private:
    int a;
public:
    //Shape();
    Shape(int);
    friend bool operator==( Shape const& ,Shape const& );
    friend bool operator>( Shape const& ,Shape const& );
    friend bool operator<( Shape const& ,Shape const& );
    virtual double getArea() const;
    virtual void print() const;
    void setA(int);
    int getA() const;
};

#endif // SHAPE_H

