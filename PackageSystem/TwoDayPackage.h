#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include "Package.h"

class TwoDayPackage : public Package
{
    public:
    //TwoDayPackage(int = 2, int, double, Address, Address);
    TwoDayPackage(int, double, Address, Address);
    virtual double calculatePrice(int, double);



    private:


};

#endif // TWODAYPACKAGE_H
