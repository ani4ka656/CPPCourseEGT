#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Box.cpp" // Box class definition

int main()
{

   Box box1(12, 3.2, 4.4);
   Box box2(13, 5.7, 8);
    Box box3 = box2 + box1;
    box3.print();
   return 0;
} // end main


