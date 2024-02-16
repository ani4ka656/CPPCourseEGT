#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(string, string = "Rectangle");
	string getName() const;
	virtual void draw() const;

private:
	string name;
};

