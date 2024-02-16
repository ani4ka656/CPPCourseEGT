#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(string, double, double);
	double getWidth() const;
	double getHeight() const;
	void area() const override;
	virtual void draw() const;

private:
	double width;
	double height;
};

