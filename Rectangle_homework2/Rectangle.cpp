#include "Rectangle.h"
using namespace std;
Rectangle::Rectangle(pair<int, int> A, pair<int, int> B, pair<int, int> C, pair<int, int> D)
{
    setCoordinates(A, B, C, D);
}
void Rectangle::setCoordinates(pair<int, int> A, pair<int, int> B, pair<int, int> C, pair<int, int> D)
{
    if(A.first <= 20 && B.first <= 20 && C.first <= 20 && D.first <= 20
            && A.first >= 0 && B.first >= 0 && C.first >= 0 && D.first >= 0
            && A.second >= 0 && B.second >= 0 && C.second >= 0 && D.second >= 0
            && A.second <= 20 && B.second <= 20 && C.second <= 20 && D.second <= 20)
    {
        //ili srawnqwame x1 s x2 i tn i y1 s y2 i tn
        double d1 = sqrt(pow((C.first - A.first), 2) + pow((C.second - A.second), 2));
        double d2 = sqrt(pow((D.first - B.first), 2) + pow((D.second - B.second), 2));
        // cout<< sqrt(pow((C.first - A.first), 2) + pow((C.second - A.second), 2));
        // cout<< sqrt(pow((D.first - B.first), 2) + pow((D.second - B.second), 2));
        if(d1 == d2)
        {

            this->A= A;
            this->B = B;
            this->C = C;
            this->D = D;
           /* this->A.first = A.first;
            this->A.second = A.second;
            this->B.first = B.first;
            this->C.first = C.first;
            this->C.second = C.second;
            this->D.first = D.first;
            this->D.second = D.second;*/
        }

    }

}
double Rectangle::calculateHeight(pair<int, int> A,pair<int, int> D)
{
    return this->D.second - this->A.second;
}
double Rectangle::calculateLength(pair<int, int>A, pair<int, int> B)
{
    return this->B.first - this->A.first;
}

double Rectangle::calculatePerimeter()
{
    double height = calculateHeight(this->A, this->D);
    double len = calculateLength(this->A, this->B);
    return 2*(height + len);
}
double Rectangle::calculateArea()
{
    double height = calculateHeight(this->A, this->D);
    double len = calculateLength(this->A, this->B);
    return height * len;
}
bool Rectangle::checkIfSquare()
{
// int d = sqrt(((C.first - A.first) ^ 2) + ((C.second - A.second) ^ 2));
    double height = calculateHeight(this->A, this->D);
    double len = calculateLength(this->A, this->B);
   // cout<<height<<" "<<len;
    if(height == len) return 1;
    else return 0;
    /*if(pow(d, 2) == (pow(height,2)+ pow(len, 2)))
        return 1;
    else return 0;*/
}
void Rectangle::print() const
{
    cout<<this->A.first<<" ";
    cout<<this->A.second<<endl;
    cout<<this->B.first<<" ";
    cout<<this->B.second<<endl;
    cout<<this->C.first<<" ";
    cout<<this->C.second<<endl;
    cout<<this->D.first<<" ";
    cout<<this->D.second<<endl;
}
