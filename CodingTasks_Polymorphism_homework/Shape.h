#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
	Shape(string);
	string getColor() const;
	virtual void draw() const;
	virtual void printArea() const = 0;
	virtual ~Shape(){}


protected:
	string color;
	double radius;
	
};

