#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
    string name;
public:
    Circle(int, string = "Circle");;
    string getName() const;
    virtual void draw() const;
};

