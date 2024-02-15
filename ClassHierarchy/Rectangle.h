#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
      int b;
      string name;
public:
    Rectangle(int, int, string = "Rectangle");
    void setB(int);
    int getB() const;
    string getName() const;
    virtual void draw() const;

};

