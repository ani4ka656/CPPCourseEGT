#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(string, double, double);
	double getWidth() const;
	double getHeight() const;
	virtual void draw() const;
	virtual double area() const;

private:
	double width;
	double height;
};

