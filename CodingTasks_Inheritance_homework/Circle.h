#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(string, string = "Circle");
	string getName() const;
	virtual void draw() const;

private:
	string name;
};

