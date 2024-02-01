#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include "Package.cpp"
class OvernightPackage : public Package
{
    public:
        OvernightPackage(int, int, double, Address, Address);
        virtual double calculatePrice(int, double);

        void setExpressPrice(int);
        int getExpressPrice() const;

    private:
        int expressPrice;
};

#endif // OVERNIGHTPACKAGE_H
