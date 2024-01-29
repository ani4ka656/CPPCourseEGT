#include "Package.h"

Package::Package(int price, double weight, Address sa, Address ra) : senderAddress(sa), receiverAddress(ra)
{
    setBasePrice(price);
    setWeight(weight);
}
void Package::print() const
{
    this->senderAddress.print();
    this->receiverAddress.print();
    cout << getBasePrice() << " " << getWeight() <<endl;
}

int Package::getBasePrice() const
{
    return this->basePrice;
}

double Package::getWeight() const
{
    return this->weight;
}

void Package::setBasePrice(int price)
{
    this->basePrice = price;
}
void Package::setWeight(double weight)
{
    this->weight = weight;
}
double Package::calculatePrice(int price, double weight){
    cout << "in package calculate cost";
    return 0.0;
}


