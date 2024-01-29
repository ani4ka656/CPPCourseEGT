#include "Box.h"


Box::Box(double width_, double lenght_, double height_)
{
    setWidth(width_);
    setLenght(lenght_);
    setHeight(height_);
}

void Box::setWidth(double width_)
{
    this->width = width_;
}

void Box::setLenght(double lenght_)
{
    this->lenght = lenght_;

}

void Box::setHeight(double height_)
{
    this->height = height_;
}

double Box::getWidth() const
{
    return this->width;
}

double Box::getLenght() const
{
    return this->lenght;
}

double Box::getHeight() const
{
    return this->height;
}
void Box::print() const
{
    cout << "Width:" << getWidth() << endl
         << "Length:" << getLenght() << endl
         << "Height:" << getHeight() << endl;

}
Box operator+(Box const& first, Box const& second)
{

    double total_width = first.width + second.width;
    double total_lenght = first.lenght+ second.lenght;
    double total_height = first.height + second.height;
    Box nb(total_width, total_lenght, total_height);
    return nb;
}
