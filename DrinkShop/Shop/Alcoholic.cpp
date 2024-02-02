#include "Alcoholic.h"

Alcoholic::Alcoholic(string name, double price, int quantity, string type, double volume, double tax) : Drinks(name, price, quantity, type), volume(volume), tax(tax) {}
void Alcoholic::setVolume(double volume)
{
    this->volume = volume;
}
void Alcoholic::setTax(double tax)
{
    this->tax = tax;
}
double Alcoholic::getVolume() const
{
    return this->volume;
}
double Alcoholic::getTax() const{
    return this->tax;
}
double Alcoholic::calculatePrice(){
    return Drinks::calculatePrice() * getTax() + Drinks::calculatePrice();
}
void Alcoholic::print(){
    Drinks::print();
    cout << "Volume: " << getVolume()<< endl;
    cout << "Tax: " << this->calculatePrice() << endl;
}
Drinks* Alcoholic::clone() const
{
    return new Alcoholic(*this);
}
