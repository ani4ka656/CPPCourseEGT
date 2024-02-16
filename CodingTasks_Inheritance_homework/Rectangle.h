#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
public:
	Rectangle(string);
	virtual void draw() const;

};

