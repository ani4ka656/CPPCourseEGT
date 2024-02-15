#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape
{
private:
    int a;
public:
    //Shape();
    Shape(int);
    virtual void draw() const;
    void setA(int);
    int getA() const;
};

