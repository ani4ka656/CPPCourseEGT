#include "NoAlcoholic.h"

NoAlcoholic::NoAlcoholic(string name, double price, int quantity, string type, double liters, double tax) : Drinks(name, price, quantity, type), liters(liters), cityTax(tax) {}
void NoAlcoholic::setLiters(double liters)
{
    this->liters = liters;
}
void NoAlcoholic::setTax(double tax)
{
    this->cityTax = tax;
}
double NoAlcoholic::getLiters() const
{
    return this->liters;
}
double NoAlcoholic::getTax() const{
    return this->cityTax;
}
double NoAlcoholic::calculatePrice(){
    return Drinks::calculatePrice() + getTax();
}
void NoAlcoholic::print(){
    Drinks::print();
    cout << "Liters: " << getLiters()<< endl;
    cout << "Tax: " << this->calculatePrice() << endl;
}
Drinks* NoAlcoholic::clone() const
{
    return new NoAlcoholic(*this);
}
