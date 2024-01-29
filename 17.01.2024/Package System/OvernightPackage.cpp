#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(int expressPrice, int price, double weight, Address sa, Address ra) : Package(price, weight, sa, ra)
{
    setExpressPrice(expressPrice);
}


double OvernightPackage::calculatePrice(int basePrice, double weight)
{
    return (this->getWeight() * this->getPrice()) + getExpressPrice();
}


void OvernightPackage::setExpressPrice(int price)
{
    this->expressPrice = price;
}
int OvernightPackage::getExpressPrice() const
{
    return this->expressPrice;
}
