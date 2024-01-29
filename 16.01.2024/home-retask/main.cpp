
#include <iostream>
using namespace std;

#include "Point.h"
#include "Point.cpp"
#include "Rectangle.h"
#include "Rectangle.cpp"



int main(){
    Point p1(10,15);
    cout << p1.getX() << " ";
    cout << p1.getY() << endl;

    Point p2(15, 2);
    cout << p2.getX() << " ";
    cout << p2.getY() << endl;

    Point p3(5, 10);
    cout << p3.getX() << " ";
    cout << p3.getY() << endl;

    Point p4(15, 10);
    cout << p4.getX() << " ";
    cout << p4.getY() << endl;


    Rectangle rect1 (p1, p2, p3, p4);
    
    cout << rect1.isRectangle() << endl;
    cout << rect1.isSquare() << endl;

     
    
    return 0;

}