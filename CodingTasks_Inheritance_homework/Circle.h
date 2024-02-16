#pragma once
#include "Shape.h"
class Circle : public Shape
{
public:
	Circle(string);
	virtual void draw() const;
};

