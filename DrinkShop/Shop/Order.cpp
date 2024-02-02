#include "Order.h"
int Order::numberOfOrders = 0;
//Order::Order(int number, string date, double sum) : date(date)
Order::Order(string date, double sum) : date(date)
{   numberOfOrders++;
    setNumber(numberOfOrders);
}

void Order::addDrink(Drinks* d)
{
    this->dr.push_back(d);
    calculateSum();
    //dr.push_back(d->clone());
}

void Order::print()
{
    cout<<dr.size()<<endl;
    for (int i = 0; i < dr.size(); i++)
    {
       // dr[i]->print();
        this->dr[i]->print();
    }
    cout << getDate() << endl;
    calculateSum();
    cout << "Sum: " << getSum();
    cout << "Number of order:" << getNumber() << endl;
}
void Order::calculateSum()
{
    double s = 0;
    for (int i = 0; i < dr.size(); i++)
    {
       // s += this->dr[i]->calculatePrice();
        s += this->dr[i]->calculatePrice();
    }
    this->sum = s;
}
double Order::getSum()
{
    return this->sum;
}
void Order::setDate(string date)
{
    this->date = date;
}

void Order::setNumber(int numb)
{
    this->number = numb;
}
string Order::getDate() const
{
    return this->date;
}
int Order::getNumber() const
{
    return this->number;
}
vector <Drinks*> Order::getDrinks(){
    return this->dr;
}
