#ifndef PACKAGE_H
#define PACKAGE_H
#include "Address.h"

class Package
{
    public:
        Package(int, double, Address, Address);

       // double calculateCost();
        void print() const;
        void setBasePrice(int);
        void setWeight(double);
        int getBasePrice() const;
        double getWeight() const;
        virtual double calculatePrice(int, double);

    private:
        int basePrice;
        double weight;
        Address senderAddress;
        Address receiverAddress;
};

#endif // PACKAGE_H
