#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(int price, double weight, Address sa, Address ra) : Package(price, weight, sa, ra){}
double TwoDayPackage::calculatePrice(int price, double weight){
    return this->getWeight() * this->getBasePrice();
}

