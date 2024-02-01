#ifndef Point_h
#define Point_h

#include <iostream>
using namespace std;

class Point
{

public:
    Point (int x, int y);

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    
private:
    int x;
    int y;

};

#endif