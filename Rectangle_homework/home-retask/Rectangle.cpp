#include "Rectangle.h"

Rectangle::Rectangle( const Point &p1, const Point &p2, const Point &p3, const Point &p4) : p1(p1), p2(p2), p3(p3), p4(p4)
{}

    bool Rectangle::isRectangle()
    {
        if (this->p1.getX() == this->p3.getx() && this->p2.getX() == this->p4.getX())
        // можем да проверим и Y;
        {
            return true;
        }
        else {
            return false;
        }
    }

    bool Rectangle::isSquare()
    {
        if (isRectangle())
        {
            int sideA = calculateLenght(p1.getX(), p2.getX());

            int sideB = calculateLenght(p1.getY(), p3.getY())
            
            if (sideA == sideB)
            {
                return true;
            }
        }
        else {
            return false;
        }

    }

    int Rectangle::calculateLenght( int first, int second)
    {
        return second - first; //second is alyaws greater;
    }




   const Point &Rectangle::getP1() const
   {
        return p1;
   }
   void Rectangle::setP1(const Point &p1)
   {
        Rectangle::p1 = p1;
   }



    const Point &Rectangle::getP2() const {
        return p2;
    }
    void Rectangle::setP2(const Point &p2)
    {
        Rectangle::p2 = p2;
    }



    const Point &Rectangle::getP3() const 
    {
        return p3;
    }    
   void Rectangle::setP3(const Point &p3)
   {
        Rectangle::p3 = p3;
   }


    const Point &Rectangle::getP4() const 
    {
        return p4;
    }
    void Rectangle::setP4(const Point &p4)
    {
        Rectangle::p4 = p4;
    }


