#include <iostream>
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include <vector>
using namespace std;
int main() {
    Shape* sPtr1 = new Circle(30);
    Shape* sPtr2 = new Rectangle(15, 20);
    vector <Shape*> myShapes;
    myShapes.push_back(sPtr1);
    myShapes.push_back(sPtr2);
    for (int i = 0; i < myShapes.size(); i++) {
        cout << "Shape:" << i + 1 << endl;
        myShapes[i]->draw();
    }
    delete sPtr1;
    delete sPtr2;
    myShapes.clear();
    return 0;
}