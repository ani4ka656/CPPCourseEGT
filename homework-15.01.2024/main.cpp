#include <iostream>
//#include "Rectangle.h"

#include "Rectangle.cpp"

int main()
{
    pair<int, int> A(0,1);
    pair<int, int> B(5,1);
    pair<int, int> C(5,4);
    pair<int, int> D(0,4);
    Rectangle rec(A, B, C, D);
    rec.print();
    cout<<"Area is: "<<rec.calculateArea()<<endl;
    cout<<"perimeter is: "<<rec.calculatePerimeter()<<endl;
    if(rec.checkIfSquare()==1)
    {
        cout<<"the rec is square"<<endl;
    }
    else cout<<"the rec is not square"<<endl;
    return 0;
}

