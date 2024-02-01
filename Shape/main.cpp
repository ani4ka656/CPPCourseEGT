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
#include "Shape.h"
#include "TwoDimShape.cpp"
#include "ThreeDimShape.cpp"
#include <vector>
int main(){
    Shape *sPtr1 = new TwoDimShape(30);
    Shape *sPtr2 = new ThreeDimShape(15, 20);
    vector <Shape*> myShapes;
    myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    for(int i = 0; i < myShapes.size(); i++){
        myShapes[i]->print();
    }
return 0;
}

