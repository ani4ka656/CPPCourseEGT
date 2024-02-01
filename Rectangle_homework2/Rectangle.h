#ifndef _RECTANGLE_H_
#define _RECTANGLE_H_
#include <utility>
#include <cmath>
using namespace std;
class Rectangle
{
private:
    pair<int, int> A;
    pair<int, int> B;
    pair<int, int> C;
    pair<int, int> D;
    double calculateHeight(pair<int, int>,pair<int, int>);
    double calculateLength(pair<int, int>,pair<int, int>);
public:
    Rectangle(pair<int, int>, pair<int, int> , pair<int, int> , pair<int, int> );
    void setCoordinates(pair<int, int>, pair<int, int>, pair<int, int>, pair<int, int>);
    void print() const;
    double calculatePerimeter();
    double calculateArea();
    bool checkIfSquare();


};
#endif


