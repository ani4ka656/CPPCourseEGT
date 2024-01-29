#ifndef NOALCOHOLIC_H
#define NOALCOHOLIC_H
#include "Drinks.h"

class NoAlcoholic : public Drinks
{
    public:
        NoAlcoholic(string, double, int, string, double, double);
        void setLiters(double);
        void setTax(double);
        double getLiters() const;
        double getTax() const;
        virtual double calculatePrice();
        virtual void print();
        virtual Drinks* clone() const;

    private:
        double liters;
        double cityTax;
};

#endif // NOALCOHOLIC_H
