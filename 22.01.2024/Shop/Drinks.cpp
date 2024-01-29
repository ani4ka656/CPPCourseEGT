#include "Drinks.h"

Drinks::Drinks(string name, double price, int quantity, string type): name(name), price(price), quantity(quantity), type(type){}
void Drinks::setName(string name) {
    this->name = name;
}
void Drinks::setPrice(double price){
    this->price = price;
}
void Drinks::setQuantity(int quantity){
    this->quantity = quantity;
}
void Drinks::setType(string type){
    this->type = type;
}
string Drinks::getName()const{
    return this->name;
}
double Drinks::getPrice()const{
    return this->price;
}
int Drinks::getQuantity()const{
    return this->quantity;
}
string Drinks::getType()const{
    return this->type;
}
double Drinks::calculatePrice(){
    return this->getPrice() * this->getQuantity();
}
void Drinks::print(){
    cout << "Name: " << getName() << endl;
    cout << "Price: " << getPrice() << endl;
    cout << "Quantity: " << getQuantity() << endl;
    cout << "Type: " << getType() << endl;
}


int Drinks::updateQuantity(int newQ){
    return this->quantity += newQ;
}

