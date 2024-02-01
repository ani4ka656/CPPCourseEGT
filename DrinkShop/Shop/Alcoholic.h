#ifndef ALCOHOLIC_H
#define ALCOHOLIC_H
#include "Drinks.h"

class Alcoholic : public Drinks
{
    public:
        Alcoholic(string, double, int, string, double, double);
        void setVolume(double);
        void setTax(double);
        double getVolume() const;
        double getTax() const;
        virtual Drinks* clone() const;
        virtual double calculatePrice();
        virtual void print();

    private:
        double volume;
        double tax;
};

#endif // ALCOHOLIC_H
