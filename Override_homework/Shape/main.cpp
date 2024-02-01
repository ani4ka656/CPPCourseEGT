#include <iostream>
using namespace std;
//const in member functions
//friend functions and classes
//this pointer and referencees used for returning the object
//dynamic memory and releasing it
//static class members
//className *obj1( pointer to an object of type className) = new constructor of className(arg1,arg2);
//after creating the object its a must for delete objects
//polymorphism
/*Task-Shape
*/
#include "bits/stdc++.h"
#include "Shape.h"
#include "TwoDimShape.cpp"
#include "ThreeDimShape.cpp"
#include "Rectangle.cpp"
#include "Square.cpp"
#include "Triangle.cpp"
#include "Circle.cpp"
#include <vector>
int main(){
//    Shape *sPtr1 = new TwoDimShape(30);
    Shape *sPtr2 = new ThreeDimShape(15, 20);
    Shape *sPtr3 = new Rectangle(15, 20, "nuleva", 45);
    Shape *sPtr4 = new Square(5, "nuleva", 10);
    Shape *sPtr8 = new Square(5, "nuleva", 10);
    Shape *sPtr5 = new Triangle(8, 3, "nuleva", 40);
    Shape *sPtr6 = new Circle( 3, "nuleva", 5);
 //  Shape *sPtr2 = new ThreeDimShape(15, 20);
    vector <Shape*> myShapes;
   // myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    myShapes.push_back(sPtr3);
    myShapes.push_back(sPtr4);
    myShapes.push_back(sPtr5);
    myShapes.push_back(sPtr6);
    if(*sPtr4== *sPtr8)
        cout << "Yes" << endl;
    else cout << "No" << endl;
 if(*sPtr2 < *sPtr3)
        cout << "Yes" << endl;
    else cout << "No" << endl;
 if(*sPtr4 >*sPtr5)
        cout << "Yes" << endl;
    else cout << "No" << endl;

/*
    for(int i = 0; i < myShapes.size(); i++){
        myShapes[i]->print();
        cout<<endl<<"--------"<<endl;
    }*/

  /*  cout<<sPtr4->getArea();
    cout<<sPtr8->getArea();*/
return 0;
}

